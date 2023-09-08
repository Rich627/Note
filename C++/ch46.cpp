#include <iostream>

using namespace std;

int getDigit(const int number);
int sumOddDigits(const string number);
int sumEvenDigits(const string number);

int main(){

    string cardNumber;
    int result = 0;

    cout << "Enter a credit card number as a long integer: ";
    cin >> cardNumber;
    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
     
    if (result % 10 == 0){
        cout << cardNumber << " is valid" << endl;
    }else{
        cout << cardNumber << " is invalid" << endl;
        }
        
}

int getDigit(const int number){
    return number % 10 + number / 10;
}
int sumOddDigits(const string number){
    int sum = 0;
    for (int i=cardNumber.size()-2; i>=0; i-=2){
        sum += getDigit((cardNumber[i]-'0') * 2);
    }

    return sum;
}
int sumEvenDigits(const string number){
    int sum = 0;
    for (int i=cardNumber.size()-1; i>=1; i-=2){
        sum += getDigit((cardNumber[i]-'0') * 2);
    }

    return sum;

}