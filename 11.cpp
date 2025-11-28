#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(0, "");
	int eznum;
	cout << "[+] Программа - “Геометрические фигуры" << endl;
	cout << "[1] Линия" << endl;
	cin >> eznum;
	if (eznum == 1) {
		cout << "Линия" << endl;
		cout << "[1] Горизонтальная" << endl;
		cout << "[2] Вертикальная" << endl;
	}
	else {
		cout << "Введено неправильно значение, повторите попытку" << endl;
	}
	int hardnum;
	cin >> hardnum;
	cout << "[+] Фигура: Линия" << endl;
	cout << "[1] Горизонтальная" << endl;
	cout << "[2] Вертикальная" << endl;
	cout << "Выберете значение:" << endl;


	return 0;
}
