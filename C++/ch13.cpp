#include <iostream>

int main(){
    using namespace std;

    char op;
    double num1, num2, result;

    cout << "****************CALCULATOR****************\n";
    cout << "Enter operator: ";
    cin >> op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    switch (op){
        case '+':
            result = num1 + num2;
            cout << "result=" << result << "\n";
            break;
        case '-':
            result = num1 - num2;
            cout << "result=" << result << "\n";
            break;
        case '*':
            result = num1 * num2;
            cout << "result=" << result << "\n";
            break;
        case '/':
            result = num1 / num2;
            cout << "result=" << result << "\n";
            break;
        default:
            cout << "Invalid operator\n";
    }

    return 0;
}