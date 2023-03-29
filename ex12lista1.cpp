#include <iostream>

using namespace std;

int main() {
	float baseMaior, baseMenor, altura, area;
	
	cin>>baseMaior;
	cin>>baseMenor;
	cin>>altura;
	
	area = ((baseMaior + baseMenor) * altura)/2;
	
	cout<<area<<endl;
	
	return 0;
}
