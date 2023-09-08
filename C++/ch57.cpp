#include <iostream>

using namespace std;

class Student{
    public:
    string name;
    int age;
    double gpa;
    // 變數名稱與參數名稱相同，使用this->變數名稱
    Student(string name, int age, double gpa){
        this -> name = name;
        this -> age = age;
        this -> gpa = gpa;
    }
};


int main(){
    Student s1("John", 19, 3.5);
    Student s2("Mary", 18, 3.8);
    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.gpa << endl;
}
