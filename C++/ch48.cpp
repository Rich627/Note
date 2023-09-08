#include <iostream>

using namespace std;

int main(){
    int *pointer = nullptr;
    int x = 123;

    //pointer = &x;
    
    if(pointer==nullptr){
        cout << "pointer is nullprt" << endl;
    }else{
        cout << "pointer is not nullprt" << endl;
    }
}