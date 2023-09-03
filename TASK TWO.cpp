#include<iostream>
using namespace std;

int main(){
    float number1;
    float number2;
    char operation;
    cout<<"Welcome To My Calculator"<<endl;
    cout<<"Enter number one : ";
    cin>>number1;
    cout<<"Enter number two : ";
    cin>>number2;
    cout<<"Select operation you want to perform (+, -, *, /) : ";
    cin>>operation;

    double result;

    switch (operation) {
        case '+':
            result = number1 + number2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = number1 - number2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = number1 * number2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (number2 != 0) {
                result = number1 / number2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operation. Please choose from +, -, *, /." << endl;
    }

    return 0;
}

