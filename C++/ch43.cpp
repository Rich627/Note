#include <iostream>

using namespace std;

int main(){
    string name = "John";
    int age = 21;
    bool isMale = true;

    //印出地址
    cout << &name << endl;
    cout << &age << endl;
    cout << &isMale << endl;
}