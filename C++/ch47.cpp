#include <iostream>

using namespace std;

int main(){
    string name = "Bro";
    //將name的位址指向pName
    string *pName = &name;
    int age = 21;
    int *pAge  = &age;
    string freePizzas[5] = {"Bro", "Bro", "Bro", "Bro", "Bro"};
    string *pFreePizzas = freePizzas;

    cout << "name: " << *pName << endl;
    cout << "age: " << *pAge << endl;
    //這樣會印出第一個值
    cout << "freePizzas: " << *pFreePizzas << endl;

}
