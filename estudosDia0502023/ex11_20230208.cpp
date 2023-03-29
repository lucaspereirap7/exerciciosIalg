#include <iostream>
#include <cmath>

using namespace std;

int main () {
	float peso, altura;
	cin>>peso>>altura;
	
	if (peso < 60 && altura < 1.20) {
		cout<<"A"<<endl;
	} else if (peso < 60 && altura >= 1.20 && altura <= 1.70) {
		cout<<"B"<<endl;
	} else if (peso < 60 && altura > 1.70) {
		cout<<"C"<<endl;
	} else if (peso >= 60 && peso <= 90 && altura < 1.20) {
		cout<<"D"<<endl;
	} else if (peso >= 60 && peso <= 90 && altura >= 1.20 && altura <= 1.70) {
		cout<<"E"<<endl;
	} else if (peso >= 60 && peso <= 90 && altura > 1.70) {
		cout<<"F"<<endl;
	} else if (peso > 90 && altura < 1.20) {
		cout<<"D"<<endl;
	} else if (peso > 90 && altura >= 1.20 && altura <= 1.70) {
		cout<<"E"<<endl;
	} else if (peso > 90 && altura > 1.70) {
		cout<<"F"<<endl;
	}
}
