#include <iostream>

using namespace std;

int main() {
	char letra, contA = 0, contB = 0;
	
	cin>>letra;
	
	while (letra) {
		if (letra == 'a'){
			contA++;
		} else if (letra == 'b'){
			contB++;
		}
	if (contA < contB) {
		cout<<"1"<<endl;
	} else {
		cout<<"0"<<endl;
	}
}
	return 0;
}
