#include <iostream>
using namespace std;
const int MAX = 100;

struct Figurinha {
  int numero;
  char jogador[20];
  int quantidade;
};

void ler_dados(Figurinha vetor[], int &tamanho) {
  cin >> tamanho;
  for (int i = 0; i < tamanho; i++) {
    cin >> vetor[i].numero >> vetor[i].jogador >> vetor[i].quantidade;
  }
}

void ordenar_dados(Figurinha vetor[], int tamanho) {
  for (int i = 0; i < tamanho - 1; i++) {
    for (int j = i + 1; j < tamanho; j++) {
      if (vetor[i].numero > vetor[j].numero) {
        Figurinha temp = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = temp;
      }
    }
  }
}

int busca_sequencial(Figurinha vetor[], int tamanho, int valor_procurado) {
  for (int i = 0; i < tamanho; i++) {
    if (vetor[i].numero == valor_procurado) {
      return i;
    }
  }
  return -1;
}

int main() {
  Figurinha vetor[MAX];
  int tamanho;
  ler_dados(vetor, tamanho);
  int valor_procurado;
  cin >> valor_procurado;
  ordenar_dados(vetor, tamanho);
  int posicao = busca_sequencial(vetor, tamanho, valor_procurado);
  if (posicao == -1) {
    cout << "Figurinha não encontrada." << endl;
  } else {
    cout << posicao << endl;
    cout << vetor[posicao].jogador << " " << vetor[posicao].quantidade << endl;
  }
  return 0;
}
