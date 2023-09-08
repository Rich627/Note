#include <iostream>

using namespace std;

struct student{
    string name;
    double gpa;
    bool enrolled;
};

int main(){
    student student1;
    student1.name = "John";
    student1.gpa = 3.5;
    student1.enrolled = true;

    cout << student1.name << endl;

    student student2;
    student2.name = "Mary";
    student2.gpa = 3.9;
    student2.enrolled = false;
    
}