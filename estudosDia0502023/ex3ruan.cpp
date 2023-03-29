#include <iostream>
using namespace std;

int nao_primos(int n, int m) {
    int cont = 0;
    while (n <= m) {
        int divisores = 0;
        int i = 1;
        while (i <= n) {
            if (n % i == 0) divisores++;
            i++;
        }
        if (divisores > 2) cont++;
        n++;
    }
    return cont;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << nao_primos(n, m) << endl;
    return 0;
}




