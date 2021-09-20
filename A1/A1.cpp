#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // Word to be guessed can be assumed to be at most 20 characters long (including end-of-string null character)
    char HangmanWord[20];
    char GuessedLetters[20];

    // Variable to store current guess
    char GuessLetter;

    std::cin >> HangmanWord;
    bool valid = true;
    // Check that input word only consists of uppercase English letters
    for (int i = 0; i < strlen(HangmanWord); i++) {
        if ((HangmanWord[i] > 'Z') || (HangmanWord[i] < 'A')) {
            valid = false;
            break;
        }
    }
    while (valid == true) {
        if (strcmp(HangmanWord, GuessedLetters) == 0) {
            cout << "HANGMAN!\n";
            return 0;
        }
        std::cin >> GuessLetter;
        if ((GuessLetter > 'Z') || (GuessLetter < 'A')) {
            break;
        } else {
            for (int i = 0; i < strlen(HangmanWord); i++) {
                if (HangmanWord[i] == GuessLetter) {
                    GuessedLetters[i] = GuessLetter;
                    GuessedLetters[strlen(HangmanWord)] = *"\0";
                }
            }
        }
    }
}
