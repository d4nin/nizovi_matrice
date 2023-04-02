#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Velicina matrice?\n";
    cin >> n >> m;
    int a[n][m];
    int p[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << "Unesite broj na indexu [" << i << "," << j << "]: ";
            cin >> a[i][j];
            p[i][j] = a[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            p[i][j] *= a[i][j];
        }
    }
    cout << "Proizvod elemenata matrice:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
Napisati program koji racuna proizvod elemenata matrice a[n][m]
*/