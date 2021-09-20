#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	// Word to be guessed can be assumed to be at most 20 characters long (including end-of-string null character)
	char HangmanWord[20];
	char GuessLetters[20];

	// Variable to store current guess
	char GuessLetter;

    std::cout << "Enter a Word:\n";

	std::cin >> HangmanWord;

	std::cout << "The Word is ";
	std::cout << HangmanWord;

	bool valid = true;

	// Check that input word only consists of uppercase English letters
	for (int i = 0; i < strlen(HangmanWord); i++)
	{
		if ((HangmanWord[i] > 'Z') || (HangmanWord[i] < 'A'))
		{
			valid = false;
			break;
		}
	}
	while (valid == true)
	{
		std::cin >> GuessLetter;
		if ((GuessLetter > 'Z') || (GuessLetter < 'A'))
		{
			std::cout << "OUTSIDE OF CHAR RANGE";
			break;
		}
		else
		{
			for (int i = 0; i < strlen(HangmanWord); i++)
			{
				if (GuessLetter == HangmanWord[i]) {

					std::cout << "Correct!";
					break;
				}
				else
				{

				}
			}
		}
	}
}
