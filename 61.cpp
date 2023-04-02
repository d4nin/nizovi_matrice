#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Velicina matrice?\n";
    cin >> n;
    int a[n][n], b[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Unesite broj na indexu: [" << i << "," << j << "]: ";
            cin >> a[i][j]; 
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            b[i][j] = a[j][n - i - 1];
        }
    }
    cout << "Matrica b:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
Na osnovu kvadratne matrice a formirati kvadratnu matricu b koja predstavlja matricu a u ogledalu (krajnja lijeva
kolona matrice a treba da bude krajnja desna matrica b itd)
*/