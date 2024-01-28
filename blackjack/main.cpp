#include <algorithm>
#include <array>
#include <cassert>
#include <iostream>
#include "random.cpp"
using namespace std;
struct Card
{
    enum Rank
    {
        rank_ace,
        rank_2,
        rank_3,
        rank_4,
        rank_5,
        rank_6,
        rank_7,
        rank_8,
        rank_9,
        rank_10,
        rank_jack,
        rank_queen,
        rank_king,

        max_ranks
    };
    enum Suit
    {
        suit_club,
        suit_diamond,
        suit_heart,
        suit_spade,
        max_suits
    };
    static constexpr array allRanks{rank_ace,rank_2,rank_3,rank_4,rank_5,rank_6,rank_7,rank_8,rank_9,rank_10,rank_jack,rank_queen,rank_king};
    static constexpr array allSuits{suit_club,suit_diamond,suit_heart,suit_spade};
    Rank rank{};
    Suit suit{};
    friend ostream& operator<<(ostream& out,const Card &card)
    {
        static constexpr array ranks{'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
        static constexpr array suits{'C','D','H','S'};
        out<<ranks[card.rank]<<suits[card.suit];
        return out;
    }
    int value() const
    {
        static constexpr array rankValues{11,2,3,4,5,6,7,8,9,10,10,10,10};
        return rankValues[rank];
    }
};
class Deck
{
private:
      array<Card,52> m_cards{};
      size_t m_nextCardIndex{0};
public:
    Deck()
    {
          size_t count{0};
        for (auto suit:Card::allSuits)
            for (auto rank:Card::allRanks)
                m_cards[count++]=Card{rank,suit};
    }
    void shuffle()
    {
        std::shuffle(m_cards.begin(),m_cards.end(),Random::mt);
        m_nextCardIndex=0;
    }
    Card dealCard()
    {
        assert(m_nextCardIndex!=52&&"Deck dealCard ran out of cards");
        return m_cards[m_nextCardIndex++];
    }
};
class Player
{
private:
    int m_score{};
    int m_aceCount{0};
public:
    void addToScore(Card card)
    {
        m_score+=card.value();
        if(card.rank==Card::rank_ace)
            ++m_aceCount;
    }
    void consumeAces(int maxScore)
    {
        while(m_score>maxScore&&m_aceCount>0)
        {
            m_score-=10;
            --m_aceCount;
        }
    }
    int score(){return m_score;}
};
namespace Settings
{
    constexpr int bust{21};
    constexpr int dealerStopsAt{17};
}
bool playerWantsHit()
{
    while (true)
    {
          cout<<"(h) to hit, or (s) to stand: ";
        char ch{};
          cin>>ch;
        switch (ch)
        {
            case 'h':
                return true;
            case 's':
                return false;
        }
    }
}
bool playerTurn(Deck& deck,Player& player)
{
    while (player.score()<Settings::bust&&playerWantsHit())
    {
        Card card{deck.dealCard()};
        player.addToScore(card);
        player.consumeAces(Settings::bust);
          cout<<"You were dealt "<<card<<". You now have: "<<player.score()<<'\n';
    }
    if (player.score()>Settings::bust)
    {
          cout<<"You went bust!\n";
        return true;
    }
    return false;
}
bool dealerTurn(Deck& deck,Player& dealer)
{
    while (dealer.score()<Settings::dealerStopsAt)
    {
        Card card{deck.dealCard()};
        dealer.addToScore(card);
        dealer.consumeAces(Settings::bust);
          cout<<"The dealer flips a "<< card <<".  They now have: "<< dealer.score()<< '\n';
    }
    if (dealer.score()>Settings::bust)
    {
          cout<<"The dealer went bust!\n";
        return true;
    }
    return false;
}
enum class GameResult
{
    playerWon,
    dealerWon,
    tie
};
GameResult playBlackjack()
{
    Deck deck{};
    deck.shuffle();
    Player dealer{};
    Card card1{deck.dealCard()};
    dealer.addToScore(card1);
      cout<<"The dealer is showing "<<card1<<" ("<<dealer.score()<<")\n";
    Player player{};
    Card card2{deck.dealCard()};
    Card card3{deck.dealCard()};
    player.addToScore(card2);
    player.addToScore(card3);
      cout<<"You are showing "<<card2<<' '<<card3<<" ("<<player.score()<<")\n";
    if(playerTurn(deck,player)) 
        return GameResult::dealerWon;
    if(dealerTurn(deck,dealer))
        return GameResult::playerWon;
    if (player.score()==dealer.score())
        return GameResult::tie;
    return (player.score()>dealer.score()?GameResult::playerWon:GameResult::dealerWon);
}
int main()
{
    switch (playBlackjack())
    {
    case GameResult::playerWon:
          cout<<"You win!\n";
        return 0;
    case GameResult::dealerWon:
          cout<<"You lose!\n";
        return 0;
    case GameResult::tie:
          cout<<"It's a tie.\n";
        return 0;
    }
    return 0;
}