#include <iostream>
using namespace std;

bool simetricaPoSporednoj(int n) {
    int a[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Unesite broj na indexu [" << i << "," << j << "]: ";
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] != a[n - j - 1][n - i - 1]) return false;
         }
    }
    return true;
}

int main() {
    int n;
    cout << "Velicina matrice?\n";
    cin >> n;
    if(simetricaPoSporednoj(n)) cout << "Matrica je simetricna u odnosu na sporednu dijagonalu.";
    else cout << "Matrica nije simetricna u odnosu na sporednu dijagonalu.";
    return 0;
}
/*
Napisati funkciju koja provjerava da li je kvadratna matrica simetricna u odnosu na sporednu dijagonalu.
*/