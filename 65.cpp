#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Velicina matrice?\n";
    cin >> n >> m;
    int a[n][m], d[n] = {0};
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << "Unesite elemente na indexu [" << i << "," << j << "]: ";
            cin >> a[i][j];
            d[i] += a[i][j];
        }
    }
    cout << "Niz d:\n";
    for(int i = 0; i < n; i++) {
        cout << d[i] << " ";
    }
    return 0;
}
/*
Data je matrica a[n][m]. Na osnovu nje formirati niz d[n] gdje je d[0] zbir elemenata u prvom redu, d[1] zbir
elemenata u drugom redu itd
*/