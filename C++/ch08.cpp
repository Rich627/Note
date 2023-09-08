#include <iostream>
#include <string>
int main(){

    using namespace std;
    //定義string
    string name;
    int age;

    //使用cin讀取時若輸入空白鍵會被當成結束
    //可以用getline(cin, name)來解決

    cout << "What is your name? ";
    getline(std::cin, name);

    cout << "How old are you? ";
    cin >> age;

    cout << "Hello " << name << "\n";
    cout << "Yor are " << age << " years old \n";

    return 0;
}