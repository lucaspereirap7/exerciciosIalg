#include <iostream>

using namespace std;

int main() {
    int num_soldados;
    cin >> num_soldados;

    int filas = 0, soldados = 0;

    while (soldados < num_soldados) {
        filas++;
        soldados = filas * (filas + 1) / 2;
    }
    int soldados_ultima_fila = num_soldados - (filas - 1) * filas / 2;
    
    cout <<filas<<endl<<soldados_ultima_fila;
    
    return 0;
}
