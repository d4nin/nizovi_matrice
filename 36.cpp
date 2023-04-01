#include <iostream>
using namespace std;

int main() {
    int n,m;
    cout << "Velicina matrice?\n";
    cin >> n >> m;
    int a[n][m], b[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << "Unesite broj na indeksu [" << i << "," << j << "]: ";
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i][j] % 2 == 0) b[i][j] = 0;
            if(a[i][j] % 2 != 0) b[i][j] = 1;
        }
    }
    cout << "Matrica b: \n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
Napisati program koji na osnovu unjete matrice a[n][m] formira matricu b[n][m] ciji su elementi ili 1 ili 0 ili to,
ako je element a[i][j] paran tada je b[i][j] jednak 0, a ako je neparan b[i][j] je jednak 1.
*/