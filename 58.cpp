#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Velicina matrice?\n";
    cin >> n;
    int a[n][n], k;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Unesite broj na indexu [" << i << "," << j << "]: ";
            cin >> a[i][j];
        }
    }
    cout << "Unesite broj k!\n";
    cin >> k;
    int z(0);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i + j == k && a[i][j] % 2 != 0) z += a[i][j];
        }
    }
    cout << "Zbir: " << z;
    return 0;
}
/*
Za njetu kvadratnu matricu a, ispisati zbir svakih neparnih elemenata koji se nalaze na mjestima gdje je zbir indeksa
i i j jednak datom broju k, to jest i+j=k
*/