#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "КалКулатоp" << endl;
	cout << "1 СКЛАДЫВАТЬ				|+" << endl;
	cout << "2 ВЫЧИТАТЬ				|-" << endl;
	cout << "3 УМНОЖАТЬ				|*" << endl;
	cout << "4 ДЕЛИТЬ				|/" << endl;
	cout << "5 ДЕЛИТЬ БЕЗ ОСТАТКА	|%" << endl;
	cout << "выберите операци:1,2,3,4,5" << endl;
	int operetion;
	int НомерОдин;
	int НомерДва;
	cin >> operetion;
	cout << "введите первое число" << endl;
	cin >> НомерОдин;
	cout << "введите второе число" << endl;
	cin >> НомерДва;
	if (operetion == 1) {
		cout << "Ваш результат = " << НомерОдин + НомерДва << endl;
	}
	if (operetion == 2) {
		cout << "Ваш результат = " << НомерОдин - НомерДва << endl;
	}
	if (operetion == 3) {
		cout << "Ваш результат = " << НомерОдин * НомерДва << endl;
	}
	if (operetion == 4) {
		if (НомерДва == 0) {
			cout << "На ноль делить нельзя, попробуйте ещё раз" << endl;
			return 0;
		}
		else {
			cout << "Ваш результат =" << НомерОдин / НомерДва << endl;
		}
	}
	
	if (operetion == 5) {
		if (НомерДва == 0) {
			cout << "На ноль делить нельзя, попробуйте ещё раз" << endl;
			return 0;
		}
		else {
			cout << "Ваш результат =" << НомерОдин % НомерДва << endl;
		}
	}

	return 0;
}
