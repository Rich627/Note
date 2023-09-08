#include <iostream>

using namespace std;
int main(){
    //arr要一樣的型態
    string car[] = {"Volvo", "BMW", "Ford", "Mazda"};
    //會印出陣列的位址
    cout << car << endl;
    //印值 
    cout << car[0] << endl;
    car [0] = "Opel";
    cout << car[0] << endl;


    //和Java一樣
    string test[2];
    test[0] = "test";
    cout << test[1] << endl;
    
}