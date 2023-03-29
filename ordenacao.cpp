#include <iostream>
#include <vector>

using namespace std;

int BuscaBinaria(int V[], int pos_inicial, int pos_final, int K) {
	int meio = (pos_inicial + pos_final)/2;
	
	if (K == V[meio]) {
		return meio;
	} else if (pos_inicial < pos_final) {
		if (V[meio] < K) return BuscaBinaria(V, pos_inicial, meio-1, K);
	} else {
		return -1;
	}
}
