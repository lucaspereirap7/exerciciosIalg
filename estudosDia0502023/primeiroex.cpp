#include <iostream>

using namespace std;

int main() {
    int size, i, j;
    cin >> size;

    i = 0;
    while (i < size) {
        j = 0;
        while (j < size) {
            if ((i + j) % 2 == 0) {
                cout << ".";
            } else {
                cout << "#";
            }
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}




