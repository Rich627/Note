#include <iostream>

using namespace std;

int facotorial(int num){
    
    if(num > 1){
        return num * facotorial(num - 1);
    }else{
        return 1;
    }

}

int main(){
    cout << facotorial(10) << endl;
}

