#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

// Funcție pentru a determina prioritatea unui operator
int getPriority(char op) {
    if (op == '+' || op == '-') {
        return 1;
    } else if (op == '*' || op == '/') {
        return 2;
    }
    return 0;  // Prioritate 0 pentru operatori necunoscuți sau paranteze
}

// Funcție pentru a rezolva expresiile din interiorul parantezelor
double evaluateInsideParentheses(string inside) {
    stack<double> values;
    stack<char> operators;
    int decimalCount = 0;

    for (int i = 0; i < inside.length(); i++) {
        if (isdigit(inside[i]) || (inside[i] == '.' && isdigit(inside[i + 1]))) {
            double operand = 0;
            bool decimalFound = false;

            while (i < inside.length() && (isdigit(inside[i]) || inside[i] == '.')) {
                if (isdigit(inside[i])) {
                    operand = operand * 10 + (inside[i] - '0');
                    if (decimalFound) {
                        decimalCount++;
                    }
                } else if (inside[i] == '.') {
                    decimalFound = true;
                }
                i++;
            }

            operand /= pow(10, decimalCount);
            values.push(operand);

            decimalCount = 0;

            i--;
        } else if (inside[i] == '+' || inside[i] == '-' || inside[i] == '*' || inside[i] == '/') {
            while (!operators.empty() && getPriority(operators.top()) >= getPriority(inside[i])) {
                double operand2 = values.top();
                values.pop();

                double operand1 = values.top();
                values.pop();

                char op = operators.top();
                operators.pop();

                switch (op) {
                    case '+':
                        values.push(operand1 + operand2);
                        break;
                    case '-':
                        values.push(operand1 - operand2);
                        break;
                    case '*':
                        values.push(operand1 * operand2);
                        break;
                    case '/':
                        if (operand2 != 0) {
                            values.push(operand1 / operand2);
                        } else {
                            cout << "Error: Division by zero" << endl; 
                            exit(1);
                        }
                        break;
                }
            }

            operators.push(inside[i]);
        } else if (inside[i] == '{') {
            int start = i + 1;
            int count = 1;

            while (count > 0) {
                i++;
                if (inside[i] == '{') {
                    count++;
                } else if (inside[i] == '}') {
                    count--;
                }
            }

            string insideParentheses = inside.substr(start, i - start);
            double result = evaluateInsideParentheses(insideParentheses);
            values.push(result);
        }
        else if (inside[i] == '[') {
            int start = i + 1;
            int count = 1;

            while (count > 0) {
                i++;
                if (inside[i] == '[') {
                    count++;
                } else if (inside[i] == ']') {
                    count--;
                }
            }

            string insideParentheses = inside.substr(start, i - start);
            double result = evaluateInsideParentheses(insideParentheses);
            values.push(result);
        }
        else if (inside[i] == '(') {
            int start = i + 1;
            int count = 1;

            while (count > 0) {
                i++;
                if (inside[i] == '(') {
                    count++;
                } else if (inside[i] == ')') {
                    count--;
                }
            }

            string insideParentheses = inside.substr(start, i - start);
            double result = evaluateInsideParentheses(insideParentheses);
            values.push(result);
        }
    }

    while (!operators.empty()) {
        double operand2 = values.top();
        values.pop();

        double operand1 = values.top();
        values.pop();

        char op = operators.top();
        operators.pop();

        switch (op) {
            case '+':
                values.push(operand1 + operand2);
                break;
            case '-':
                values.push(operand1 - operand2);
                break;
            case '*':
                values.push(operand1 * operand2);
                break;
            case '/':
                if (operand2 != 0) {
                    values.push(operand1 / operand2);
                } else {
                    cout << "Error: Division by zero" << endl;
                    exit(1);
                }
                break;
        }
    }

    return values.top();
}

int main() {
    string expression;
    getline(cin, expression);

    double result = evaluateInsideParentheses(expression);
    cout << result << endl;

    return 0;
}
