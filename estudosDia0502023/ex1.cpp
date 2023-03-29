#include <iostream>
#include <fstream>

using namespace std;

int main () {
	int quantReservas, numeroPessoas, tempoHospedagem;
	int andar, corredor, quarto, contador = 0;
	string nomeArquivo;
	char tipoMonstro;
	
	cin>>nomeArquivo;
	ifstream monstros(nomeArquivo);
	monstros>>quantReservas;
	while (contador<quantReservas){
		monstros>>tipoMonstro>>numeroPessoas>>tempoHospedagem;
	
		if (tipoMonstro == 'z' || tipoMonstro == 'm') {
			andar = 1;
	} else if (tipoMonstro == 'l' || tipoMonstro == 'd') {
		andar = 2;
	} else if (tipoMonstro == 'h' || tipoMonstro == 's') {
		andar = 3;
	} else if (tipoMonstro == 'v' || tipoMonstro == 'f') {
		andar = 4;
	}
	
	if (numeroPessoas < 2) {
		corredor = 1;
	} else if (numeroPessoas == 2) {
		corredor = 2;
	} else if (numeroPessoas >= 3) {
		corredor = 3;
	}
	
	if (tempoHospedagem <= 2) {
		quarto = 1;
	} else if (tempoHospedagem == 3 || tempoHospedagem == 4) {
		quarto = 2;
	} else if (tempoHospedagem == 5 || tempoHospedagem == 6) {
		quarto = 3;
	} else if (tempoHospedagem >= 7) {
		quarto = 4;
	}
		cout<<andar<<corredor<<quarto<<endl;
		contador++;		
	}	
	return 0;
	
}
