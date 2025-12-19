#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");

    int size = 3;

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            cout << "# ";
        }
        cout << endl;
    }
    return 0;
}
