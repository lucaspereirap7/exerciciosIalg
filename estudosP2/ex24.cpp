#include <iostream>
using namespace std;

struct jedi {
	string nome;
	string hierarquia;
};

struct sabre {
	string cristal;
	string cor;
	jedi jediLuz;
};

int main () {
	int quantidade;
	cin >> quantidade;
	sabre lista[quantidade];
	
	for (int i = 0; i < quantidade; i++) {
		cin >> lista[i].jediLuz.nome >> lista[i].jediLuz.hierarquia;
		cin >> lista[i].cristal >> lista[i].cor;
	}
	
	string cavaleiro;
	cin >> cavaleiro;
	int verde = 0, vermelho = 0, azul = 0;
	for (int i = 0; i < quantidade; i++) {
		if (lista[i].jediLuz.hierarquia == cavaleiro) {
			if (lista[i].cor == "verde") {
				verde++;
			} else if (lista[i].cor == "vermelho") {
				vermelho++;
			} else {
				azul++;
			}
		}
	}
	cout << "Verde " << verde << endl << "Vermelho " << vermelho << endl << "Azul " << azul << endl;
	return 0;
}
