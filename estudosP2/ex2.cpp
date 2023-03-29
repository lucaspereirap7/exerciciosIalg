#include <iostream>

using namespace std;

int main () {
	int numero, aux, cont=0;
	bool sent;
	cin>>numero;
	int vetor[numero];
	
	for(int i = 0; i < numero; i++){
		cin >> aux;
		vetor[i] = aux;
		for(int j = 0; j < i; j++){
			if(vetor[j] == vetor[i]){
				sent = true;
			}
		}
		if(sent == false){
			cont++;
		}
		sent = false;
	}
	
	cout << cont;
	
	
	
	return 0;
}
