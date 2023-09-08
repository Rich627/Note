#include <iostream>


int main(){
    using namespace std;

    // int month;
    // cout << "Enter month: ";
    // cin >> month;

    // switch(month){
    //     case 1:
    //         cout << "January\n";
    //         break;
    //     case 2:
    //         cout << "February\n";
    //         break;
    //     case 3:
    //         cout << "March\n";
    //         break;
    //     case 4:
    //         cout << "April\n";
    //         break;
    //     case 5:
    //         cout << "May\n";
    //         break;
    //     case 6:
    //         cout << "June\n";
    //         break;
    //     case 7:
    //         cout << "July\n";
    //         break;
    //     case 8:
    //         cout << "August\n";
    //         break;
    //     case 9:
    //         cout << "September\n";
    //         break;
    //     case 10:    
    //         cout << "October\n";
    //         break;
    //     case 11:    
    //         cout << "November\n";
    //         break;  
    //     case 12:    
    //         cout << "December\n";
    //         break;
    //     default:
    //         cout << "Invalid month\n";
    // }

    char grade;

    cout << "What letter grade?";
    cin >> grade;
    switch (grade){
        case 'A':
            cout << "90-100\n";
            break;
        case 'B':
            cout << "80-89\n";
            break;
        case 'C':
            cout << "70-79\n";
            break;
        case 'D':
            cout << "60-69\n";
            break;
        case 'F':
            cout << "0-59\n";
            break;
        default:
            cout << "Invalid grade\n";
    }
}