#include <iostream>

int main(){
    using namespace std;
    
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    // int len = name.length();
    // if (len > 12){
    //     cout << "Your name is too long!" << endl;
    // }
    // else{
    //     cout << "Your name is " << name << endl;
    // }

    // if (name.empty()){
    //     cout << "You did not enter your name!" << endl;
    // }else{
    //     cout << "Your name is " << name << endl;
    // }

    // //會被清空
    // name.clear();
    // cout << "Hello" << name << endl;

    // name.append(" is a good guy!");
    // cout << name << endl;

    // cout << name.at(0) << endl;

    name.insert(0, "Mr. ");
    cout << name << endl;

    cout << name.find(" ") << endl;
    name.erase(0, 3);
    cout << name << endl;
}