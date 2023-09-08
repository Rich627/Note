#include <iostream>

using namespace std;
int main(){
    double gpa = 2.5;
    //8 bytes
    cout << sizeof(gpa) << endl;
    //24 bytes
    string name = "John";
    cout << sizeof(name) << endl;
    //1 byte
    char grade = 'F';
    cout << sizeof(grade) <<endl;
    //1 byte
    bool student = true;
    cout << student << endl;
    //2 byte
    char grades[] = {'A', 'B'};
    cout << sizeof(grades) << endl;
    //3 byte
    char grades2[] = {'A', 'B', 'C'};
    cout << sizeof(grades2) << endl;
}