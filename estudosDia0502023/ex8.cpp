#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int num1, num2, num3, num4, num5, num6, num7, maiorV, segV;
	cin>>num1>>num2>>num3>>num4>>num5>>num6>>num7;
	
	if (num1 >= num2 && num1 >= num3 && num1 >= num4 && num1 >= num5 && num1 >= num6 && num1 >= num7) {
		maiorV = num1;
	} else if (num2 >= num1 && num2 >= num3 && num1 >= num4 && num2 >= num5 && num2 >= num6 && num2 >= num7) {
		maiorV = num2;
	} else if (num3 >= num1 && num3 >= num2 && num3 >= num4 && num3 >= num5 && num3 >= num6 && num3 >= num7) {
		maiorV = num3;
	} else if (num4 >= num1 && num4 >= num2 && num4 >= num3 && num4 >= num5 && num4 >= num6 && num4 >= num7) {
		maiorV = num4;
	} else if (num5 >= num1 && num5 >= num2 && num5 >= num3 && num5 >= num4 && num5 >= num6 && num5 >= num7) {
		maiorV = num5;
	} else if (num6 >= num1 && num6 >= num2 && num6 >= num3 && num6 >= num4 && num6 >= num5 && num6 >= num7) {
		maiorV = num6;
	} else if (num7 >= num1 && num7 >= num2 && num7 >= num3 && num7 >= num4 && num7 >= num5 && num7 >= num6) {
		maiorV = num7;
	} 
	
	if (num1 < maiorV && num1 >= num2 && num1 >= num3 && num1 >= num4 && num1 >= num5 && num1 >= num6 && num1 >= num7) {
		segV = num1;
	} else if (num2 < maiorV && num2 >= num1 && num2 >= num3 && num1 >= num4 && num2 >= num5 && num2 >= num6 && num2 >= num7) {
		segV = num2;
	} else if (num3 < maiorV && num3 >= num1 && num3 >= num2 && num3 >= num4 && num3 >= num5 && num3 >= num6 && num3 >= num7) {
		segV = num3;
	} else if (num4 < maiorV && num4 >= num1 && num4 >= num2 && num4 >= num3 && num4 >= num5 && num4 >= num6 && num4 >= num7) {
		segV = num4;
	} else if (num5 < maiorV && num5 >= num1 && num5 >= num2 && num5 >= num3 && num5 >= num4 && num5 >= num6 && num5 >= num7) {
		segV = num5;
	} else if (num6 < maiorV && num6 >= num1 && num6 >= num2 && num6 >= num3 && num6 >= num4 && num6 >= num5 && num6 >= num7) {
		segV = num6;
	} else if (num7 < maiorV && num7 >= num1 && num7 >= num2 && num7 >= num3 && num7 >= num4 && num7 >= num5 && num7 >= num6) {
		segV = num7;
	} 
	
	cout<<maiorV<<endl<<segV;
	
}
