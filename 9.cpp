#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");


	cout << "Цикл While" << endl;
	cout << "Для выхода нажмите 0" << endl;
	int num;
	do {
		cout << "Введите число" << endl;
		cin >> num;
		if (num >= 1 and num <= 15) {
			for (int qwe = 0; qwe != num; qwe++) {
				cout << "Цикл отработал. Круг " << qwe+1 << endl;
			}
		}
		else if (num < 1 and num !=0) {
			cout << "Ошибка" << endl;
			cout << "Повторие ещё раз" << endl;
		}
		else if (num > 15 and num != 0) {
			cout << "Ошибка" << endl;
			cout << "Повторите ещё раз" << endl;
		}
	} while (num != 0);
	return 0;
}
