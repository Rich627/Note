#include <iostream>

using namespace std;

struct Car{
    string model;
    int year;
    string color;
};

// 這是call by value  原始的變數不會被改變
// void printCar(Car car){
//     cout << car.model << " " << car.year << " " << car.color << endl;
// }
// int main(){
//     Car car1, car2;

//     car1.model = "Mustang";
//     car1.year = 1967;
//     car1.color = "blue";
//     car2.model = "Camaro";
//     car2.year = 1969;
//     car2.color = "green";

//     printCar(car1);
// }

// call by reference，原始變數會被改變
void printCar(Car car, int year){
    car.year = year;
    cout << car.model << " " << car.year << " " << car.color << endl;
}

int main(){
    Car car1;
    car1.model = "Mustang";
    car1.year = 1967;
    car1.color = "blue";

    printCar(car1, 2020);
    cout << car1.year << endl;
}

