#include <iostream>

int main(){
    using namespace std;

    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 100){
        cout << "You are too old\n";
    }
    else if (age < 0){
        cout << "You are not born yet\n";
    }
    else if (age >= 18){
        cout << "You are adult\n";
    }
    else{
        cout << "You are not adult\n";
    }

    return 0;
}