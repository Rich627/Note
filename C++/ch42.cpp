#include <iostream>
using namespace std;

int main() {
    string questions[] = {"1. What is the capital of France?",
                          "2. What is the capital of Germany?",
                          "3. What is the capital of Spain?",
                          "4. What is the capital of Italy?",
                          "5. What is the capital of the UK"};

    string options[][4] = {{"A. Paris", "B. London", "C. Madrid", "D. Rome"},
                           {"A. Berlin", "B. London", "C. Madrid", "D. Rome"},
                           {"A. Paris", "B. London", "C. Madrid", "D. Rome"},
                           {"A. Paris", "B. London", "C. Madrid", "D. Rome"},
                           {"A. Paris", "B. London", "C. Madrid", "D. Rome"}};

    char answerKey[] = {'A', 'A', 'C', 'D', 'B'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

    for (int i = 0; i < size; i++) {
        cout << questions[i] << endl;
        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++) {
            cout << options[i][j] << endl;
        }

        cout << "Your answer (A/B/C/D): ";
        cin >> guess;

        if (guess == answerKey[i]) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Wrong! The correct answer is " << answerKey[i] << endl;
        }
    }

    cout << "Your final score is: " << score << "/" << size << endl;

    return 0;
}
