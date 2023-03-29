#include <iostream>
using namespace std;

int main(){
    int numeros, i = 0, j = 0;
    int positivos[8], negativos[8];

    for(int k = 0; k < 8; k++){
        cin >> numeros;
        if(numeros >= 0){
            positivos[i] = numeros;
            i++;
        } else {
            negativos[j] = numeros;
            j++;
        }
    }

    for(int k = 0; k < i; k++){
        cout << positivos[k] << " ";
    }
    cout << endl;

    for(int k = 0; k < j; k++){
        cout << negativos[k] << " ";
    }
    cout << endl;

    return 0;
}
