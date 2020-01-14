#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class QuizGame {


public:

	void checkResults(int user_answer, int correct_answer, int round) {

		QuizGame game;

		if (user_answer == correct_answer) {
			game.startRound(round + 1);
		}
		else {
			game.endRound();
		}

	}

	void startRound(int round) {

		int user_input;
		int correct_answer;

		switch (round) {

		case 1:
			system("cls");
			cout << "1 | Quiz: Who is the founder of Epic Games?" << endl;
			cout << "1: Tommy Shelby                 2: Tim Sweeney" << endl;
			cout << "3: Simon Desue                  4: Maximilian Fred" << endl;
			cout << "############################################################" << endl;
			cout << "Enter your answer: ";

			cin >> user_input;
			correct_answer = 2;
			checkResults(user_input, correct_answer, round);

			break;
		case 2:
			system("cls");
			cout << "### That was the correct answer, good job!" << endl;
			cout << "2 | Quiz: Who are the founder of WWW?" << endl;
			cout << "1: Robert Cailliau & Tim Berners-Lee        2: Tim Mather & Paul Renner" << endl;
			cout << "3: Michael Jackson & Justin Bieber          4: Beatrice Duc & Tobias Rempert" << endl;
			cout << "############################################################" << endl;
			cout << "Enter your answer: ";

			cin >> user_input;
			correct_answer = 1;
			checkResults(user_input, correct_answer, round);

			break;

		case 3:
			system("cls");
			cout << "Congrats, you've won." << endl;
			system("pause");
			startRound(1);
			break;

		}

	}

	void endRound() {
		system("cls");
		cout << "You've failed." << endl;
		system("pause");
		startRound(1);
	}

};

int main() {
	QuizGame game;
	game.startRound(1);
	return 0;
}