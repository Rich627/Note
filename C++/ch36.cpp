#include <iostream>

using namespace std;


/* 錯誤寫法 getTotal裡面sizeof(prices)會是8
double getTotal(double prices[]);
int main(){
    double prices[] = {40.2, 15, 53.523};
    double total = getTotal(prices);
    cout << total << endl;
}

double getTotal(double prices[]){
    
    double total = 0;
    for (int i=0; i < sizeof(prices)/sizeof(double); i++){
        total += prices[i];
    }
    return total;
}
*/

double getTotal(double prices[], int size);

int main(){
    double prices[] = {40.2, 15, 53.523};
    int size = sizeof(prices)/sizeof(double);
    double total = getTotal(prices, size);
    cout << total << endl;
}

double getTotal(double prices[], int size){
    
    double total = 0;
    for (int i=0; i < size; i++){
        total += prices[i];
    }
    return total;
}

