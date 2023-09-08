#include <iostream>

int main(){
    using namespace std;

    double temp;
    char unit;

    cout << "Enter the temperature: ";
    cout << "F = Fahrenheit, C = Celsius\n";
    cout << "What unit would you like to convert to: ";
    cin >> unit;

    if (unit == 'F' || unit == 'f'){
        cout << "Enter the temperature in Celsius: ";
        cin >> temp;

        temp = (1.8 * temp) + 32;

        cout << "The temperature in Fahrenheit is: " << temp << "F\n";
    }
    else if (unit == 'C' || unit == 'c'){
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> temp;

        temp = (temp - 32) / 1.8;

        cout << "The temperature in Celsius is: " << temp << "C\n";
    }
    else{
        cout << "Invalid unit\n";
    }

}