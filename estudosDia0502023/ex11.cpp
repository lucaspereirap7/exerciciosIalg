#include <iostream>

using namespace std;

int eliminados(string selecao1, string selecao2, string selecao3, string selecao4, int pont1, int pont2, int pont3, int pont4, string menor1, string menor2) {
	
	if (pont1 <= pont2 && pont1 <= pont3 && pont1 <= pont4) {
		menor1 = selecao1;
	} else if (pont2 <= pont1 && pont2 <= pont3 && pont1 <= pont4) {
		menor1 = selecao2;
	} else if (pont3 <= pont1 && pont3 <= pont2 && pont3 <= pont4) {
		menor1 = selecao3;
	} else if (pont4 <= pont1 && pont4 <= pont2 && pont4 <= pont3) {
		menor1 = selecao4;
	}
	
	if (pont1 >= menor1 && pont1 <= pont2 && pont1 <= pont3 && pont1 <= pont4) {
		menor2 = selecao1;
	} else if (pont2 >= menor1 && pont2 <= pont1 && pont2 <= pont3 && pont1 <= pont4) {
		menor2 = selecao2;
	} else if (pont3 >= menor1 && pont3 <= pont1 && pont3 <= pont2 && pont1 <= pont4) {
		menor2 = selecao3;
	} else if (pont4 >= menor1 && pont4 <= pont1 && pont4 <= pont2 && pont4 <= pont3) {
		menor2 = selecao4;
	}
	
}

int main () {
	string selecao1, selecao2, selecao3, selecao4, pont1, pont2, pont3, pont4;
	cin>>selecao1>>selecao2>>selecao3>>selecao4>>pont1>>pont2>>pont3>>pont4;
	
	
	ultima = eliminados(selecao1, selecao2, selecao3, selecao4, pont1, pont2, pont3, pont4, menor1, menor2);
	penultima = eliminados(selecao1, selecao2, selecao3, selecao4, pont1, pont2, pont3, pont4, menor1, menor2);
	
	cout<<ultima<<" "<<penultima<<endl;
}
