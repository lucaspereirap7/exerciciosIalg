#include <iostream>
using namespace std;

int main () {
		int tamanho;
		cout<<"Digite o Tamanho do vetor: "<<endl;
		cin>>tamanho;
		int* vetor = new int[tamanho];
		
		for (int i = 0; i < tamanho; i++)
		{
			cout<<"Digite o elemento "<<i+1<<" do vetor: "<<endl;
			cin>>vetor[i];
		}
		
		for (int i = 0; i < tamanho; i++)
		{
			cout<<vetor[i]<<" ";
		}
		cout<<endl;
		
		delete[] vetor;
		
		
	return 0;
		
}
