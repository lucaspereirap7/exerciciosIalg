#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int soma, produto, aux1, aux2, aux3, aux4;
	
	cin>>produto;
	
	aux1 = produto % 10;
	aux2 = produto / 10;
	aux3 = aux2 % 10;
	aux4 = aux2 / 10;
	
	produto = aux1+aux3+aux4;
	soma = aux1*aux3*aux4;
	
	cout<<produto;
	ofstream saida("saida.txt");	
	saida<<soma;
	
	return 0;
}
