#include <iostream>
#include <string>

using namespace std;

int main () {
	string palavra;
	int cont = 0;
	cin >> palavra;
	int tamanhoPalavra = palavra.size();
	
	for(int i = 0; i < tamanhoPalavra; i++){
		if(palavra[i] == 'a' or palavra[i] == 'e' or palavra[i] == 'i' or palavra[i] == 'o' or palavra[i] == 'u'){
			cont++;
		}
	}
	
	cout << cont;
	
	
	return 0;
}
