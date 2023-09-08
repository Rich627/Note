#include <iostream>

using namespace std;

void printInfo(const string name, const int age);
int main(){
    
    string name = "John";
    int age = 20;
}

//const 不會改變參數的值    
void printInfo(const string name, const int age){
    name = " ";
    age = 0;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}