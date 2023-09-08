#include <iostream>

//裡面要放型態和變數名稱
double square(double length);

int main(){

    double length = 5.0;
    double area = square(length);
    std:: cout << area;
}

//開頭放要return的型態
double square(double length){
    double result = length * length;
    return result;
}