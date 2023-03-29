#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main () {
	float distancia1, distancia2, distancia3;
	string nome_arquivo;
	cin>>nome_arquivo;
	ifstream arquivo(nome_arquivo);
	char corx1, cory1, corx2, cory2, corx3, cory3, corxb, coryb;
	arquivo>>corx1>>cory1>>corx2>>cory2>>corx3>>cory3>>corxb>>coryb;
	distancia1 = sqrt(pow(corx1 - corxb, 2) + pow(cory1 - coryb, 2));
	distancia2 = sqrt(pow(corx2 - corxb, 2) + pow(cory2 - coryb, 2));
	distancia3 = sqrt(pow(corx3 - corxb, 2) + pow(cory3 - coryb, 2));	

	
	if (distancia1 < 10 && distancia2 < 10 && distancia3 < 10) {
		cout<<"detonacao"; 
	} else {
		cout<<"interceptacao";
	}
}

