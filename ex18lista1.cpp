#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float marcaDerrapagem, velocidade;
	
	cin>>marcaDerrapagem;
	
	velocidade = (14.6 * sqrt(marcaDerrapagem));
	
	cout<<velocidade<<endl;
	
	return 0;
}
