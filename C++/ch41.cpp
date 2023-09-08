#include <iostream>

using namespace std;

int main(){
    string cars[3][4] = {
        {"Volvo", "BMW", "Ford", "Mazda"},
        {"Red", "Green", "Blue", "Yellow"},
        {"1", "2", "3", "4"}
    };
    //印出地址
    cout << cars[0][0] << endl;
    int rows = sizeof(cars) / sizeof(cars[0]);
    int cols = sizeof(cars[0]) / sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << cars[i][j] << " ";
        }
        cout << endl;
    }
}