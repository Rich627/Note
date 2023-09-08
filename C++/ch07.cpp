#include <iostream>

int main(){
    using namespace std;

    //無條件捨去
    // int x = 3.14;
    // cout << x;
    
    //一樣會是3
    // double x = (int)3.14;
    // cout << x;

    // //ASCII
    // char x = 100;
    // cout << x;
    // //也可以這樣寫
    // cout << (char)100;

    int correct = 8;
    int questions = 10;
    //把correct轉成double
    double score = (double)correct/questions * 100;
    cout << score << "%";
}