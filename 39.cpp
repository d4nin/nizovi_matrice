#include <iostream>
using namespace std;

void parniNeparni(int n, int m) {
    int mat[n][m];
    int z1 = 0, z2 = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << "Unesite broj na indeksu [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(i % 2 != 0) z1 += mat[i][j];
            if(j % 2 == 0) z2 += mat[i][j];
        }
    }
    cout << "Zbir elemenata sa neparnim indeksom i: " << z1 << '\n';
    cout << "Zbir elemenata sa parnim indeksom j: " << z2;
}

int main() {
    int n, m;
    cout << "Velicina matrice?\n";
    cin >> n >> m;
    parniNeparni(n,m);
    return 0;
}
/*
Data je matrica prirodnih brojeva dimenzije NxM. Napisati funkciju koja u matrici odredjuje zbir elemenata sa 
neparnim indeksom i i parnim indeksom j
*/