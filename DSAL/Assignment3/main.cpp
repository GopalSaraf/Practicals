// Problem Statement :
// Implement stack as an abstract data type using singly linked list and
// use this ADT for conversion of infix expression to postfix, prefix and
// evaluation of postfix and prefix expression.

// Program by : 23168 Gopal Saraf

#include <cmath>
#include <iostream>
#include <locale>
#include <unordered_map>

#include "stack.h"  // importing header file
using namespace std;

class Convert {
    static inline unordered_map<char, int> priority = {
        {'+', 1}, {'-', 1}, {'*', 2}, {'/', 2}, {'^', 3}, {'(', 0}, {NULL, 0},
    };  // Priority of operators

   public:
    static string infixToPostfix(string infix) {
        Stack<char> stack;
        string postfix = "";
        for (char cha : infix) {
            try {
                if (cha == ' ')  // skipping empty spaces
                    continue;
                else if (isalnum(cha))  // 'a' - 'z' OR 'A' - 'Z' OR '0' - '9'
                    postfix += cha;
                else if (cha == '(')
                    stack.push(cha);
                else if (cha == ')') {
                    while (true) {  // Empty stack till get '('
                        char ope = stack.pop();
                        if (ope == '(') break;
                        postfix += ope;
                    }
                } else {
                    if (priority.at(cha) > priority.at(stack.peek()))
                        stack.push(cha);  // Priority check and pushing
                    else {
                        while (priority.at(cha) <= priority.at(stack.peek()))
                            postfix += stack.pop();
                        stack.push(cha);
                    }
                }
            } catch (exception ignored) {
            }
        }
        while (stack.peek()) postfix += stack.pop();
        return postfix;
    }

    static string infixToPrefix(string infix) {
        auto reverseString = [](string str) -> string {  // To reverse string
            string revStr = "";
            for (int i = str.size() - 1; i >= 0; i--) revStr += str[i];
            return revStr;
        };

        string revStr, modifiedRevStr = "";
        revStr = reverseString(infix);
        for (char cha : revStr) {
            if (cha == '(')
                modifiedRevStr += ')';  // Interchanging '(' <-> ')'
            else if (cha == ')')
                modifiedRevStr += '(';
            else
                modifiedRevStr += cha;
        }
        return reverseString(infixToPostfix(modifiedRevStr));
    }
};

class Evaluate {
   public:
    static float postfixEvaluation(string postfix) {
        float result, value1, value2;
        Stack<float> stack;

        auto calculate = [](float value1, float value2,  // Calculation
                            char operatorr) -> float {
            switch (operatorr) {
                case '+':
                    return value1 + value2;
                case '-':
                    return value1 - value2;
                case '*':
                    return value1 * value2;
                case '/':
                    return value1 / value2;
                case '^':
                    return pow(value1, value2);
                default:
                    return 0;
            }
        };

        for (char cha : postfix) {
            if (isalpha(cha))  // If found 'a' - 'z' OR 'A' - 'Z'
                return 0;
            else if (isnumber(cha))
                stack.push((float)cha - '0');
            else {
                value1 = stack.pop();
                value2 = stack.pop();
                result = calculate(value1, value2, cha);  // Calculating
                stack.push(result);
            }
        }
        return stack.pop();
    }

    static float prefixEvaluation(string prefix) {
        auto reverseString = [](string str) -> string {
            string revStr = "";
            for (int i = str.size() - 1; i >= 0; i--) revStr += str[i];
            return revStr;
        };

        string postfix = reverseString(prefix);
        return postfixEvaluation(postfix);
    }
};

int main() {
    string expression, convertedExpression;
    float result;
    char option;

    auto takeExpression = [](string typeOfConversion) -> string {
        string exp;
        cout << "Enter expression you want to convert in " << typeOfConversion
             << " > ";
        cin.ignore();
        getline(cin, exp);
        return exp;
    };

    while (true) {
        cout << "Choose an option : " << endl;
        cout << "a - Convert expression to postfix and Evaluate" << endl;
        cout << "b - Convert expression to prefix and Evaluate" << endl;
        cout << "c - Exit program" << endl;
        cout << "Option > ";
        cin >> option;
        cout << endl;

        switch (option) {
            case 'a':
                expression = takeExpression("postfix");
                convertedExpression = Convert::infixToPostfix(expression);
                result = Evaluate::postfixEvaluation(convertedExpression);
                cout << endl
                     << "Converted postfix expression : " << convertedExpression
                     << endl
                     << "Evaluation of postfix expression : " << result << endl
                     << endl;
                break;

            case 'b':
                expression = takeExpression("prefix");
                convertedExpression = Convert::infixToPrefix(expression);
                result = Evaluate::prefixEvaluation(convertedExpression);
                cout << endl
                     << "Converted prefix expression : " << convertedExpression
                     << endl
                     << "Evaluation of prefix expression : " << result << endl
                     << endl;
                break;

            case 'c':
                cout << "Exiting program..." << endl;
                exit(0);

            default:
                cout << "Incorrect option... Try again." << endl;
        }
    }
}