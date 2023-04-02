#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Velicina matrice?\n";
    cin >> n;
    int a[n][n], z1(0), z2(0);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Unesite broj na indexu [" << i << "," << j << "]: ";
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i > j) z1 += a[i][j];
            if(i + j < n -1) z2 += a[i][j];
        }
    }
    cout << "Zbir elemenata ispod glavne dijagonale: " << z1 << '\n';
    cout << "Zbir elemanata iznad sporedne diajagonale: " << z2; 
    return 0;
}
/*
Za datu kvadratnu matricu a[n][m] napisati program koji pomocu odgovarajucih funkcija racuna:
a. zbir elemenata ispod glavne dijagonale
b. zbir elemanata iznad sporedne dijagonale
*/