#include <iostream>
#include <string>

using namespace std;

int evaluateSpecialMaths(const string& expression) {
    int result = 0;
    int current_number = 0;
    char current_operator = '+';

    for (char c : expression) {
        if (isdigit(c)) {
            current_number = current_number * 10 + (c - '0');
        } else {
            // Perform operation with the current number and intermediate result using the current operator
            if (current_operator == '+') {
                result += current_number;
            } else if (current_operator == '-') {
                result -= current_number;
            } else if (current_operator == '*') {
                result *= current_number;
            } else if (current_operator == '/') {
                result /= current_number;
            }

            current_operator = c;
            current_number = 0;
        }
    }

    // Perform the final operation with the last number
    if (current_operator == '+') {
        result += current_number;
    } else if (current_operator == '-') {
        result -= current_number;
    } else if (current_operator == '*') {
        result *= current_number;
    } else if (current_operator == '/') {
        result /= current_number;
    }

    return result;
}

int main() {
    string expression;
    cout << "Enter the expression: ";
    getline(cin, expression);

    int result = evaluateSpecialMaths(expression);
    cout << "Evaluated answer: " << result << endl;

    return 0;
}
