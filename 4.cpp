#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int UserNumber;
	int UserAnswer;
	int NumberCount = 1;
	int CorreckAnswer;
	cout << "Введите число:" << endl;
	cin >> UserNumber;
	while (NumberCount <= 9) {
		cout << "Решите пример:" << UserNumber << "*" << NumberCount << endl;
		cout << "Ответ:";
		cin >> UserAnswer;
		CorreckAnswer = UserNumber * NumberCount;
		if (UserAnswer = CorreckAnswer) {
			cout << "Пример решён правильно" << endl;
			NumberCount = NumberCount + 1;
		}
		else {
			cout << "Пример решён не правильно" << "Попробуйте ещё раз" << endl;
		}
	}
	cout << "Примеры решены" << endl;

	return 0;
}
