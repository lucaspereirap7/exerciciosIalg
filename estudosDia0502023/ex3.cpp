#include <iostream>
#include <cmath>

using namespace std;

int main () {
	char caracteres;
	int sequencia = 10, contA = 0, contB = 0;
	
	while (caracteres < sequencia) {
		cin>>caracteres;
		if(caracteres == 'a') {
		contA++;
	 } else if (caracteres == 'b') {
		contB++;
	 }
	 
	 if (caracteres >= sequencia) {
		break;
	 }
	}
	
	if (contA < contB) {
		cout<<"0";
	} else {
		cout<<"1";
	}
}
