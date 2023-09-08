#include <iostream>
using namespace std;

void printNum(int num); // 函數聲明

int main() {
    int num = 1;
    printNum(num); // 傳遞參數給函數
    cout << num << endl;

    return 0;
}

void printNum(int num) { // 函數定義
    num = 2;
    cout << num << endl;
}
