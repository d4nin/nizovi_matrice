#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Velicina matrice?\n";
    cin >> n;
    int a[n][n], b[n], br(0);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Unesite broj na indexu [" << i << "," << j << "]: ";
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i + j == n - 1) {
                b[br] = a[i][j];
                br++;
            }
        }
    }
    for(int i = 0; i < br; i++) {
        for(int j = 0; j < br - 1 - i; j++) {
            if(b[j] > b[j + 1]) {
                int temp = b[j + 1];
                b[j + 1] = b[j];
                b[j] = temp;
            }
        }
    }
    cout << "Niz b:\n";
    for(int i = 0; i < br; i++) {
        cout << b[i] << " ";
    }
    return 0;
}
/*
Formirati niz b koji se sastoji od elemenata na sporednoj dijagonali matrice a i ispisati ga sortiranog u rastucem
poretku.
*/