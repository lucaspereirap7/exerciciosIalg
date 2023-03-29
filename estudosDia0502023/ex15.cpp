#include <iostream>
using namespace std;

struct Figurinha {
  int numero;
  char jogador[20];
  int quantidade;
};

void ler_figurinhas(Figurinha *&vetor_figurinhas, int &tamanho) {
  cin >> tamanho;
  vetor_figurinhas = new Figurinha[tamanho];
  for (int i = 0; i < tamanho; i++) {
    cin >> vetor_figurinhas[i].numero >> vetor_figurinhas[i].jogador >> vetor_figurinhas[i].quantidade;
  }
}

void ordenar_figurinhas(Figurinha *vetor, int tamanho) {
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

int busca_sequencial(Figurinha *vetor, int tamanho, int valor_procurado) {
  for (int i = 0; i < tamanho; i++) {
    if (vetor[i].numero == valor_procurado) {
      return i;
    }
  }
  return -1;
}

int main() {
  Figurinha *vetor_figurinhas;
  int tamanho;
  ler_figurinhas(vetor_figurinhas, tamanho);
  int valor_procurado;
  cin >> valor_procurado;
  ordenar_figurinhas(vetor_figurinhas, tamanho);
  int posicao = busca_sequencial(vetor_figurinhas, tamanho, valor_procurado);
  if (posicao == -1) {
    cout <<"-1"<< endl;
  } else {
    cout << posicao << endl;
    cout << vetor_figurinhas[posicao].jogador << " " << vetor_figurinhas[posicao].quantidade << endl;
  }
  delete[] vetor_figurinhas;
  return 0;
}
