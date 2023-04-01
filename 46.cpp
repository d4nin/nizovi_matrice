#include <iostream>
using namespace std;

int main() {
    int n,m;
    cout << "Velicina matrice?\n";
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << "Unesite broj na indexu: [" << i << "," << j << "]: ";
            cin >> a[i][j];
        }
    }
    int maxRed[n], minKolona[m];
    int tmin(0), tmax(0);
    for(int i = 0; i < n; i++) {
        tmax = a[i][0];
        for(int j = 0; j < m; j++) {
            if(tmax < a[i][j]) tmax = a[i][j];
        }
        maxRed[i] = tmax;
    }
    for(int i = 0; i < n; i++) {
        tmin = a[0][i];
        for(int j = 0; j < m; j++) {
            if(tmin > a[i][j]) tmin = a[i][j];
        }
        minKolona[i] = tmin;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i][j] == maxRed[i] && a[i][j] == minKolona[j]) {
                cout << "a[" << i << "][" << j << "] = " << a[i][j] << "\n"; 
            }
        }
    }
    return 0;
}
/*
Korisnik unosi matricu a[n][m]. Pronaci koliko elemenata u matrici su istovremeno najveci u svom redu i najmanji u 
svojoj koloni i ispisati njihove indexe
*/