#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float valorP, valorJ, valorM, valorAcm;
	cin>>valorP>>valorJ>>valorM;
	
	valorAcm = valorP * pow((1+valorJ), valorM);
	
	cout<<valorAcm<<endl;
	
	return 0;
}
