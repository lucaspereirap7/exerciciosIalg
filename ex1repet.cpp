#include <iostream>

using namespace std;

int main() {
	int num1, num2, cont = 0;
	
	cin>>num1>>num2;
	while ((num1 - num2)>= 0) {
		num1 = num1 - num2;
		cont++;
	}

	cout<<cont<<endl;
		
	return 0;
}
