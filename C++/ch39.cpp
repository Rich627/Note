#include <iostream>

using namespace std;

int main(){

    string foods[100];
    //fill(begin, end ,val)
    //寫法1
    fill(foods, foods+100, "pizza");
    //寫法2
    const int SIZE = 100;
    string foods[SIZE];
    fill(foods, foods+SIZE, "pizza");

    for (string food: foods){
        cout << food << endl;
    }
    
}