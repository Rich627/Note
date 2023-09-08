#include <iostream>
using namespace std;

int main(){
    string students[] = {"rich", "patrick", "alice"};

    //遍歷array內的元素, 賦值給student
    for (string student: students){
        cout << student << endl;
    }

    int test[] = {1, 2, 3, 4};
    for (int i: test){
        cout << i << endl;
    }
}