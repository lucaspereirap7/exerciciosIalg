#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main () {
	int placa, ultimoDigito;
	string nomeArquivo;
	cin>>placa>>nomeArquivo;
	ultimoDigito = placa%10;
	ofstream arqSaida(nomeArquivo);
	
	if (ultimoDigito > 0 && ultimoDigito <= 3) {
		arqSaida<<"segunda e terca";
	} else if (ultimoDigito >= 4 && ultimoDigito <= 6) {
		arqSaida<<"quarta e quinta";
	} else if (ultimoDigito >= 7 && ultimoDigito <= 9) {
		arqSaida<<"sexta";
	} else {
		arqSaida<<"placa invalida";
	}
}
