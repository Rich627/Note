#include <iostream>
using namespace std;

void showBalance(double balance);
double desposit();
double withdraw();

int main(){

    double balance = 0;
    int choice = 0;
   
    
    do{
        cout << "1. 查詢餘額" << endl;
        cout << "2. 存款" << endl;
        cout << "3. 提款" << endl;
        cout << "4. 離開" << endl;
        cin >> choice;

        switch (choice){
            case 1: 
                showBalance(balance);
                break;
            case 2:
                balance += desposit();
                break;
            case 3:
                balance -= withdraw();
                break;
            case 4:
                break;
            default:
                cout << "輸入錯誤" << endl;
            }
    }while(choice != 4);
}

void showBalance(double balance){
    cout << "餘額為: " << balance << endl;
}

double desposit(){
    double money = 0;
    cout << "請輸入存款金額: ";
    cin >> money;
    return money;
}

double withdraw(){
    double money = 0;
    cout << "請輸入提款金額: ";
    cin >> money;
    return money;
}