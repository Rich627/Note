#include <iostream>

using namespace std;

int main(){
    //dynamic memory allocation
    // int *pNum = NULL;
    // pNum = new int ;

    // *pNum = 21;
    
    // delete pNum;

    // cout << "address of pNum: " << pNum << endl;

    char *pGrades = NULL;
    int size;

    cout << "How many grades to enter in?:";
    cin >> size;

    pGrades = new char[size];
    for (int i=0; i<size; i++){
        cout << "Enter a grade # " << i+1 << ":"; 
        cin >> pGrades[i];
    }

    for (int i=0; i<size; i++){
        cout << "Grade #" << i+1 << ":" << pGrades[i] << endl;
    }

    delete[] pGrades;
}