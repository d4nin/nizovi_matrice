#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cout << "Velicina matrice?\n";
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << "Unesite broj na indexu [" << i << "," << j << "]: ";
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            sort(a[i], a[i] + m);
        } else {
            sort(a[i], a[i] + m, greater<int>());
        }
    }
    cout << "Izmjenjena matrica:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
Napisati program koji mijenja datu matricu a tako sto sortira elemente u svakom redu i to elemente u prvom redu
rastucim redoslijedom, elemente u drom opadajucim, elemente u trecem rastucim itd.
*/