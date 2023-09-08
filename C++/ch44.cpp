#include <iostream>

using namespace std;
//這樣寫不會交換, 因為這裡是用call by value
// void swap(string x, string y);

// int main(){
//     string x = "John";,
//     string y = "Mary";
//     swap(x, y);

//     cout << "x: " <<  x << endl;
//     cout << "y: " << y << endl;
// }

// void swap(string x, string y){
//     string temp;
//     temp = x;
//     x = y;
//     y = temp;
// }

//加上&後就是call by reference
void swap(string &x, string &y);

int main(){
    string x = "John";
    string y = "Mary";
    swap(x, y);

    cout << "x: " <<  x << endl;
    cout << "y: " << y << endl;
}

void swap(string &x, string &y){
    string temp;
    temp = x;
    x = y;
    y = temp;
}