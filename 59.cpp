#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Velicina matrice?\n";
    cin >> n >> m;
    int a[n][m], broj, br(0);
    cout << "Unesite broj!\n";
    cin >> broj;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << "Unesi broj na indexu [" << i << "," << j << "]: ";
            cin >> a[i][j];
            if(a[i][j] == broj) br++;
        }
    }
    cout << "Broj " << broj << " se ponavlja " << br << " puta.";
    return 0;
}
/*
Napisati program koji ispisuje koliko se puta odredeni broj pojavio u matrici a[n][m]. Matrica a treba da sadrzi samo
brojeve izmedju 0 i 9.
*/