#include <iostream>
using namespace std;

int main () {
	char tipoMonstro;
	int numPes, tempHos;
	int andar, corredor, quarto;
	
	cin>>tipoMonstro>>numPes>>tempHos;
	
	if (tipoMonstro == 'z' || tipoMonstro == 'm') {
		andar = 1;
	} else if (tipoMonstro == 'l' || tipoMonstro == 'd') {
		andar = 2;
	} else if (tipoMonstro == 'h' || tipoMonstro == 's') {
		andar = 3;
	} else if (tipoMonstro == 'v' || tipoMonstro == 'f') {
		andar = 4;
	}
	
	if (numPes < 2) {
		corredor = 1;
	}  else if (numPes == 2) {
		corredor = 2;
	} else if (numPes >= 3) {
		corredor = 3;
	}
	
	if (tempHos <= 2) {
		quarto = 1;
	} else if (tempHos == 3 || tempHos == 4) {
		quarto = 2;
	} else if (tempHos == 5 || tempHos == 6) {
		quarto = 3;
	} else if (tempHos > 7) {
		quarto = 4;
	}
	
	cout<<andar<<corredor<<quarto;
	
}
