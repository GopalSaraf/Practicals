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
   private:
    static inline unordered_map<char, int> priority = {
        {'+', 1}, {'-', 1}, {'*', 2}, {'/', 2}, {'^', 3}, {'(', 0}, {NULL, 0},
    };  // Priority of operators

    static string convert(string infix, bool isPostfix) {
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
                    if ((isPostfix &&
                         priority.at(cha) > priority.at(stack.peek())) ||
                        (!isPostfix &&
                         priority.at(cha) >= priority.at(stack.peek())))
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

   public:
    static string infixToPostfix(string infix) { return convert(infix, true); }

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
        return reverseString(convert(modifiedRevStr, false));
    }
};

class Evaluate {
   private:
    static float evaluation(string postfix, bool isPostfix) {
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

        auto isAlphaValues = [](string postfixStr) -> bool {
            for (char ch : postfixStr) {
                if (isalpha(ch)) return true;
            }
            return false;
        };

        auto charToValuesInput =
            [](string postfixStr) -> unordered_map<char, float> {
            unordered_map<char, float> charToFloatValue;
            float value;
            for (char ch : postfixStr) {
                if (isalpha(ch)) {
                    if (charToFloatValue.find(ch) != charToFloatValue.end())
                        continue;
                    cout << "Enter value you want to replace with " << ch
                         << " > ";
                    cin >> value;
                    charToFloatValue[ch] = value;
                }
            }
            cout << endl;
            return charToFloatValue;
        };

        unordered_map<char, float> charToFloatValues;
        if (isAlphaValues(postfix))
            charToFloatValues = charToValuesInput(postfix);

        for (char cha : postfix) {
            if (isalpha(cha))  // If found 'a' - 'z' OR 'A' - 'Z'
                stack.push(charToFloatValues[cha]);
            else if (isdigit(cha))
                stack.push((float)cha - '0');
            else {
                value1 = stack.pop();
                value2 = stack.pop();
                if (isPostfix)
                    result = calculate(value2, value1, cha);  // Calculating
                else
                    result = calculate(value1, value2, cha);
                stack.push(result);
            }
        }
        return stack.pop();
    }

   public:
    static float postfixEvaluation(string postfix) {
        return evaluation(postfix, true);
    }

    static float prefixEvaluation(string prefix) {
        auto reverseString = [](string str) -> string {
            string revStr = "";
            for (int i = str.size() - 1; i >= 0; i--) revStr += str[i];
            return revStr;
        };

        string postfix = reverseString(prefix);
        return evaluation(postfix, false);
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
        cout << endl;
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
                cout << "Converted postfix expression : " << convertedExpression
                     << endl
                     << endl;
                result = Evaluate::postfixEvaluation(convertedExpression);
                cout << "Evaluation of postfix expression : " << result << endl
                     << endl;
                break;

            case 'b':
                expression = takeExpression("prefix");
                convertedExpression = Convert::infixToPrefix(expression);
                cout << "Converted prefix expression : " << convertedExpression
                     << endl
                     << endl;
                result = Evaluate::prefixEvaluation(convertedExpression);
                cout << "Evaluation of prefix expression : " << result << endl
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
