#include <iostream>

using namespace std;

int main () {
	int num, maior = 0, segMaior = 0, cont = 0, aux = 0, soma = 0;
	
	while (cont < 7) {
		
		cin>>num;
		if (cont == 0 ) {
			maior = num;
		} else if (cont == 1) {
			if (num >= maior) {
				aux = maior;
				maior = num;
				segMaior = aux;
			} else {
				segMaior = num;
			}
		}
		else {
			if (num >= maior) {
				segMaior = maior;
				maior = num;
			} else if (num > segMaior) {
				segMaior = num;
			}
		}
		cont++;
		soma += num;
	} 
	cout<<maior<<endl<<segMaior<<endl<<((soma-maior-segMaior)/5);
}
