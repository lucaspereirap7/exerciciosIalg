#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string nomeArquivo;
	cin>>nomeArquivo;
	float maior=0, menor=0, qtd_numeros, aux =0;
	ifstream entrada(nomeArquivo);
	
	if (entrada){
		entrada>>qtd_numeros;
		while (qtd_numeros > 0){
		entrada>>aux;
		maior = aux;
		menor = aux;
		if (aux > maior){
			maior =aux;
	}	else if (aux<menor){
		menor = aux;
	} qtd_numeros--;
}		
}
	cout<<maior<<endl;
	cout<<menor<<endl;
	
entrada.close();
return 0;
}
