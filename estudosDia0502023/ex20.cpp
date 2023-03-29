#include <iostream>
#include <cmath>

using namespace std;

double somaParcelas(int nParcelas) {
	double sParcelas;
	
	sParcelas = nParcelas*(nParcelas+1)/(nParcelas+3);

	return sParcelas;
}

int main () {
	unsigned int nParcelas;
	double resultado;
	cin>>nParcelas;
	
	resultado = somaParcelas(nParcelas);
	cout<<resultado;
	return 0;
}
