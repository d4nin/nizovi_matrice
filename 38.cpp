#include <iostream>
using namespace std;

void najmanjiNajveci(int n, int m) {
    int mat[n][m];
    int tmax(0), tmin(n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << "Unesite broj na indexu [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(tmax < mat[i][j]) tmax = mat[i][j];
            if(tmin > mat[i][j]) tmin = mat[i][j];
        }
    }
    cout << "Najveci element: " << tmax << '\n';
    cout << "Najmanji element: " << tmin; 
 }

int main() {
    int n,m;
    cout << "Velicina matrice?\n";
    cin >> n >> m;
    najmanjiNajveci(n,m);
    return 0;
}
/*
Data je matrica prirodnih brojeva dimenzie NxM. Napisati funkciju koja u matrici odredjuje najveci i najmanji element
*/