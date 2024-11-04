#include <iostream>
#include <stack>
using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '/' || c == '*' || c == '^');
}

int precedence(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return -1; // Invalid character
}

string InfixToPostfix(const string& infix) {
    stack<char> s;
    string postfix;

    for (char c : infix) {
        if (isalnum(c)) { // Check if the character is an operand (a-z, A-Z, 0-9)
            postfix += c;
        } else if (c == '(') {
            s.push(c);
        } else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            if (!s.empty() && s.top() == '(') {
                s.pop(); // Pop the '('
            }
        } else if (isOperator(c)) {
            while (!s.empty() && precedence(c) <= precedence(s.top())) {
                // For '^' operator, pop only if the top is not '^' (right associative)
                if (c == '^' && s.top() == '^') break; 
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter an Infix Expression: ";
    cin >> infix;

    string postfix_exp = InfixToPostfix(infix);
    cout << "Infix Expression: " << infix << endl;
    cout << "Postfix Expression: " << postfix_exp << endl;

    return 0;
}
