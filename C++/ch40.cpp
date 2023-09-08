#include <iostream>

using namespace std;

int main(){
    string foods[5];
    int size = sizeof(foods)/sizeof(string);
    string temp;
    //寫法1
    for(int i=0; i<size; i++){
        cout << "Enter a food you lile(type 'q' to quit)" << i << ": ";
        getline(cin, temp);
        if (temp == "q"){
            break;
        }else{
            foods[i] = temp;
        }
    }

    for(string food: foods){
        cout << food << endl;
    }
}