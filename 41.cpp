#include <iostream>
using namespace std;

void zamjeniRed(int n) {
    int a[n][n];
    int b[n], k;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Unesite broj na indeksu [" << i << "," << j << "]: ";
            cin >> a[i][j];
        }
    }
    cout << endl;
    cout << "Unesite niz b:\n";
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    cout << "Unesite red za zamjenu:\n";
    cin >> k;
    for(int j = 0; j < n; j++) {
        a[k][j] = b[j];
    }
    cout << "Nova matrica:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Velicina matrice?\n";
    cin >> n;
    zamjeniRed(n);
    return 0;
}
/*
Napisati funkciju koja mijenja matricu a tako sto k-ti red zamjenjuje odgovarajucim elementima niza b
*/