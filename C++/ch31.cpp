#include <iostream>
#include <ctime>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoices(char choice);
void chooseWinener(char player, char computer);

int main(){
    char player;
    char computer;
    player = getUserChoice();
    cout << "You chose:";
    showChoices(player);

    computer = getComputerChoice();
    cout << "The computer chose:";
    showChoices(computer);
    
    chooseWinener(player, computer);
    return 0;
}

char getUserChoice(){
    char player;
    do{
    cout << "Enter P for paper, R for rock, or S for scissors: ";
    cin >> player;
    }while(player != 'P' && player != 'R' && player != 'S');
    return player;
};

char getComputerChoice(){
    srand(time(0));
    int num = rand() % 3 + 1;
    switch (num){
        case 1:
            return 'P';
            break;
        case 2:
            return 'R';
            break;
        case 3:
            return 'S';
            break;
    }
    return 0;
};

void showChoices(char choice){
    switch(choice){
        case 'P':
            cout << "paper.\n";
            break;
        case 'R':
            cout << "rock.\n";
            break;
        case 'S':
            cout << "scissors.\n";
            break;
    }
    
};

void chooseWinener(char player, char computer){
    switch(player){
        case 'P':
            if(computer == 'P'){
                cout << "It's a tie.\n";
            }else if(computer == 'R'){
                cout << "Paper covers rock. You win!\n";
            }else if(computer == 'S'){
                cout << "Scissors cut paper. You lose!\n";
            }
            break;
    
        case 'R':
            if(computer == 'P'){
                cout << "Paper covers rock. You lose!\n";
            }else if(computer == 'R'){
                cout << "It's a tie.\n";
            }else if(computer == 'S'){
                cout << "Rock breaks scissors. You win!\n";
            }
            break;
        case 'S':
            if(computer == 'P'){
                cout << "Scissors cut paper. You win!\n";
            }else if(computer == 'R'){
                cout << "Rock breaks scissors. You lose!\n";
            }else if(computer == 'S'){
                cout << "It's a tie.\n";
            }
            break;
        }
};