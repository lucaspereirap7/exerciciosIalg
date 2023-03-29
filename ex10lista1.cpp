#include <iostream>

using namespace std;

int main() {
	int quantidade, balas2g, balas5g, balas10g, valorG = 2, aux;
	
	cin>>quantidade;
	
	balas2g = quantidade / valorG;
	aux = quantidade % valorG;
	balas5g = aux / valorG;
	aux = aux % valorG;
	balas10g = aux / valorG;
	aux = aux % valorG;
	
	cout<<balas2g<<" "<<endl<<balas5g<<endl<<balas10g<<endl;
	
	return 0;
}
