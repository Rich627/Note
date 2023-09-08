#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main() {
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while (running) {
        playerMove(spaces, player);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer)) {
            cout << "You win!" << endl;
            running = false;
            break;
        }
        computerMove(spaces, computer);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer)) {
            cout << "Computer wins!" << endl;
            running = false;
            break;
        }
        if (checkTie(spaces)) {
            cout << "It's a tie!" << endl;
            running = false;
            break;
        }
    }
}

void drawBoard(char *spaces) {
    cout << "     |     |     " << endl;
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << endl;
    cout << "     |     |     " << endl;
}

void playerMove(char *spaces, char player) {
    int number;
    do {
        cout << "Enter a number between 1 and 9: ";
        cin >> number;
        number--;
        if (spaces[number] == ' ') {
            spaces[number] = player;
            break;
        }
    } while (!(number >= 0 && number < 9));
}

void computerMove(char *spaces, char computer) {
    int number;
    srand(time(0));

    while (true) {
        number = rand() % 9;
        if (spaces[number] == ' ') {
            spaces[number] = computer;
            break;
        }
    }
}

bool checkWinner(char *spaces, char player, char computer) {
    if (spaces[0] == spaces[1] && spaces[1] == spaces[2] && spaces[0] == player) {
        return true;
    } else if (spaces[3] == spaces[4] && spaces[4] == spaces[5] && spaces[3] == player) {
        return true;
    } else if (spaces[6] == spaces[7] && spaces[7] == spaces[8] && spaces[6] == player) {
        return true;
    } else if (spaces[0] == spaces[3] && spaces[3] == spaces[6] && spaces[0] == player) {
        return true;
    } else if (spaces[1] == spaces[4] && spaces[4] == spaces[7] && spaces[1] == player) {
        return true;
    } else if (spaces[2] == spaces[5] && spaces[5] == spaces[8] && spaces[2] == player) {
        return true;
    } else if (spaces[0] == spaces[4] && spaces[4] == spaces[8] && spaces[0] == player) {
        return true;
    } else if (spaces[2] == spaces[4] && spaces[4] == spaces[6] && spaces[2] == player) {
        return true;
    } else if (spaces[0] == spaces[1] && spaces[1] == spaces[2] && spaces[0] == computer) {
        return true;
    } else if (spaces[3] == spaces[4] && spaces[4] == spaces[5] && spaces[3] == computer) {
        return true;
    } else if (spaces[6] == spaces[7] && spaces[7] == spaces[8] && spaces[6] == computer) {
        return true;
    } else if (spaces[0] == spaces[3] && spaces[3] == spaces[6] && spaces[0] == computer) {
        return true;
    } else if (spaces[1] == spaces[4] && spaces[4] == spaces[7] && spaces[1] == computer) {
        return true;
    } else if (spaces[2] == spaces[5] && spaces[5] == spaces[8] && spaces[2] == computer) {
        return true;
    } else if (spaces[0] == spaces[4] && spaces[4] == spaces[8] && spaces[0] == computer) {
        return true;
    } else if (spaces[2] == spaces[4] && spaces[4] == spaces[6] && spaces[2] == computer) {
        return true;
    } else {
        return false;
    }
}

bool checkTie(char *spaces) {
    for (int i = 0; i < 9; i++) {
        if (spaces[i] == ' ') {
            return false;
        }
    }
    return true;
}
