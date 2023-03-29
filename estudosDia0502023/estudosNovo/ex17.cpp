#include <iostream>
#include <fstream>

using namespace std;

int main () {
	string arquivoPort, arquivoIng, arquivoDic;
	string aviao, coracao, macaco, pipoca, airplane, heart, monkey, popcorn;
	cin>>arquivoPort>>arquivoIng>>arquivoDic;
	
	ifstream arquivo1(arquivoPort);
	ifstream arquivo2(arquivoIng);
	ofstream arquivo3(arquivoDic);
	
	arquivo1>>aviao>>coracao>>macaco>>pipoca;
	arquivo2>>airplane>>heart>>monkey>>popcorn;	
	arquivo3<<aviao<<": "<<airplane<<endl<<coracao<<": "<<heart<<endl<<macaco<<": "<<monkey<<endl<<pipoca<<": "<<popcorn;

	arquivo1.close();
	arquivo2.close();
	arquivo3.close();
}

