#include <iostream>
using namespace std;

void selSortDecrescente(int vetor[], int tam, int indice) {
    int posMaior, aux;
    
    for (int i = 0; i < indice; i++) {
        posMaior = i;
        for (int j = i+1; j < tam; j++) {
            if (vetor[j] > vetor[posMaior]) {
                posMaior = j;
            }
        }
        aux = vetor[i];
        vetor[i] = vetor[posMaior];
        vetor[posMaior] = aux;
    }
}

int main() {
    int tam, indice;
    cin >> tam;
    int vetor[tam];
    for (int i = 0; i < tam; i++) {
        cin >> vetor[i];
    }
    cin >> indice;
    selSortDecrescente(vetor, tam, indice);
    for (int i = 0; i < tam; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
    return 0;
}
