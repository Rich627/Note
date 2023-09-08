#include <iostream>

using namespace std;

int main(){
    string students[] = {"John", "Mary", "Peter", "David", "Helen"};
    //sizeof(students): 120  有4個str 一個是24 bytes
    for(int i=1; i<=sizeof(students)/sizeof(string); i++){
        cout << students[i] << endl;
    }
}