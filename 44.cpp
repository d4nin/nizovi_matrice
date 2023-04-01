#include <iostream>
using namespace std;

bool prost(int niz) {
    if(niz <= 1) return false;
    for(int i = 2; i < niz; i++) {
        if(niz % i == 0) return false;
    }
    return true;
}

int main() {
    int n,m;
    cout << "Velicina matrice?\n";
    cin >> n >> m;
    int a[n][m], b[m];
    int br(0);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << "Unesite broj na indeksu [" << i << "," << j << "]: ";
            cin >> a[i][j];
            if(prost(a[i][j])) {
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
Napisati program koji u nizu b ubacuje proste clanove matrice dimenzije NxM i zatim ga ispisuje sortiranog rastucim
redoslijedom
*/