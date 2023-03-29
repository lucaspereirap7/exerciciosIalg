#include <iostream>
using namespace std;

struct sabre {
	string cristal;
	string cor;
};

struct jedi {
	string nome;
	string hierarquia;
	sabre sabreLuz;
};

int main () {
	int quantidade;
	cin>>quantidade;
	jedi lista[quantidade];
	
	for (int i = 0; i < quantidade; i++)
	{
		cin>>lista[i].nome>>lista[i].hierarquia;
		cin>>lista[i].sabreLuz.cristal>>lista[i].sabreLuz.cor;
	}
	
	string corSabre;
	cin>>corSabre;
	int pad = 0, cav = 0, mes = 0;
	for (int i = 0; i < quantidade; i++)
	{
		if (lista[i].sabreLuz.cor == corSabre) {
			if(lista[i].hierarquia == "padawan"){
				pad++;
			} else if (lista[i].hierarquia == "mestre") {
				mes++;
			} else {
				cav++;
			}
		}
	}
	cout<<"Mestre "<<mes<<endl<<"Cavaleiro "<<cav<<endl<<"Padawan "<<pad<<endl;
	return 0;
	
}

