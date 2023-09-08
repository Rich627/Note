#include <iostream>

using namespace std;

class Human{
    public:
        string name;
        string occupation;
        int age;

        void eat(){
            cout << "This person is eating" << endl;
        }
        void drink(){
            cout << "This person is drinking" << endl;
        }
        void sleep(){
            cout << "This person is sleeping" << endl;
        }
};

int main(){
    Human person1;
    Human person2;
    person1.name = "John";
    person1.occupation = "Engineer";
    person1.age = 30;

    cout << person1.name << endl;
    cout << person1.occupation << endl;
    cout << person1.age << endl;
    person1.eat();
    cout << endl;

    person2.name = "Mary";
    person2.occupation = "Doctor";
    person2.age = 25;
    cout << person2.name << endl;
    cout << person2.occupation << endl;
    cout << person2.age << endl;

    person2.drink();
}