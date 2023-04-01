#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Velicina matrice?\n";
    cin >> n;
    int a[n][n], b[n], c[n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Unesite broj na indexu [" << i << "," << j << "]: ";
            cin >> a[i][j];
        }
    }
    int tmax(0), tmin(n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(tmax < a[i][j]) tmax = a[i][j];
            if(tmin > a[i][j]) tmin = a[i][j];
        }
        b[i] = tmax;
        c[i] = tmin;
    }
    cout << "Niz b:\n";
    for(int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    cout << "Niz c:\n";
    for(int i = 0; i < n; i++) {
        cout << c[i] << " ";
    }
    return 0;
}
/*
Formirati niz b od elemenata kvadratne matrice a[n][m] koji predstavljaju najvece vrijednosti odgovarajuceg reda
matrice i niz c koji sadrzi najmanje vrijednosti odgovarajuceg reda matrice a
*/