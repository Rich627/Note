#include <iostream>

using namespace std;

int searchArray(int array[], int size, int element);

int main(){
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(numbers)/sizeof(int);
    int index, myNum;

    cout << "Enter element to serch for: " << endl;
    cin >> myNum;

    index = searchArray(numbers, size, myNum);
    if (index != -1){
        cout << myNum << "index: " << index;
    }else{
        cout << "error";
    }
}

int searchArray(int array[], int size, int element){
    for (int i=0; i < size; i++){
        if (array[i] == element){
            return i;
        }
    }
    //-1 是錯誤或失敗的意思
    return -1;
}