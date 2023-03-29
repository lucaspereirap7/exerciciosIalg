#include <iostream>

using namespace std;

int main () {
	int tamanho1, tamanho2;
	float numero;
	bool semIntersecao = false;
	cin>>tamanho1>>tamanho2;
	float* vetor1 = new float[tamanho1];
	float* vetor2 = new float[tamanho2];
	
	for(int i = 0; i<tamanho1; i++){
		cin>> numero;
		vetor1[i] = numero;
	}
	
	for(int i = 0; i < tamanho2; i++){
		cin >> numero;
		vetor2[i] = numero;
		for(int i = 0; i < tamanho1; i++){
			if(numero == vetor1[i]){
				cout<<numero<<" ";
				semIntersecao = true;
			}
		}
	}
	if(!semIntersecao){
		cout << -1;
	}
	
	
	return 0;
}
