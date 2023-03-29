#include <cmath>
#include <iostream>

using namespace std;

int arredondamento(unsigned int numeroInserido) {
	int arredondamento;
	
	if (numeroInserido % 2 == 0) {
		arredondamento = ceil(numeroInserido);
	} else{
		arredondamento = floor(numeroInserido);
	}
	
	return arredondamento;
}

int main () {
	unsigned int numeroInserido;
	int arredondado;
	cin>>numeroInserido;
	arredondado = arredondamento(numeroInserido);
	cout<<arredondado;
	return 0;
}
