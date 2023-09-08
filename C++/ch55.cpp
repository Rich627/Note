#include <iostream>

using namespace std;
//string 不能用switch，換成用enum
enum Day{sunday=0, monday=1, tuesday=2, wednesday=3, thursday=4, friday=5, saturday=6};


int main(){
    Day today = sunday;

    switch(today){
        case 0:
            cout << "Today is sunday" << endl;
            break;
        case 1:
            cout << "Today is moday" << endl;
            break;
        case 2:
            cout << "Today is tuesday" << endl;
            break;
        case 3: 
            cout << "Today is wednesday" << endl;
            break;
        case 4:  
            cout << "Today is thursday" << endl;
            break;
        case 5:
            cout << "Today is friday" << endl;
            break;
        case 6:  
            cout << "Today is saturday" << endl;
            break;
    }
    
}