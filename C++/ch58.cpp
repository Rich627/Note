#include <iostream>

using namespace std;

class Animal{
    public:
        bool alive = true;
    void eat(){
        cout << "I'm eating" << endl;
    }
};

class Dog: public Animal{
    public:
        string name;
        void bark(){
            cout << "I'm barking" << endl;
        }
};


int main(){

    Dog dog;
    cout << dog.alive << endl;
    dog.eat();
}