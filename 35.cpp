#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Velicina matrice?\n";
    cin >> n;
    int mat[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Unesite broj na indexu [" << i << ", " << j << "]: ";
            cin >> mat[i][j];
        }
    }
    int z1(0), z2(0), z3(0), z4(0);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) z1 += mat[i][j];
            if(i + j == n - 1) z2 += mat[i][j];
            if(i < j) z3 += mat[i][j];
            if(i + j > n - 1) z4 += mat[i][j];
        }
    }
    cout << "Zbir elemenata na glavnoj dijagonali: " << z1 << "\n";
    cout << "Zbir elemenata na sporednoj dijagonali: " << z2 << "\n";
    cout << "Zbir elemenata iznad glavne dijagonale: " << z3 << "\n";
    cout << "Zbir elemenata ispod sporedne dijagonale: " << z4 << "\n";
    return 0;
}
/*
Za datu kvadratnu matricu a[n][m], napisati program koji pomocu odgovarajucih funkcija racuna:
a. zbir elemenata na glavnoj dijagonali
b. zbir elemenata na sporednoj dijagonali
c. zbir elemenata iznad glavne dijagonale 
d. zbir elemenata ispod sporedne dijagonale
*/
