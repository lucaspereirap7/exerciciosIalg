#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
	int nota1, peso1, nota2, peso2, nota3, peso3, mediaP, aux1, aux2, aux3;
	
	cin>>nota1>>peso1;
	cin>>nota2>>peso2;
	cin>>nota3>>peso3;
	
	ifstream notas("notas.txt");
	notas>>nota1>>peso1>>nota2>>peso2>>nota3>>peso3;
	
	aux1 = nota1*peso1;
	aux2 = nota2*peso2;
	aux3 = nota3*peso3;
	
	ofstream saida("final.txt");
	mediaP = (aux1 + aux2 + aux3) / (peso1+peso2+peso3);
	saida<<fixed<<setprecision(3)<<mediaP;
	
	return 0;
}
