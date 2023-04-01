#include <iostream>
using namespace std;

void transp(int n, int m) {
    int mat[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << "Unesite broj na poziciji (" << i << "," << j << "): ";
            cin >> mat[i][j];
        }
    }
    int trans[m][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            trans[j][i] = mat[i][j];
        }
    }
    cout << "Transponovana matrica:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cout << "Velicina matrice?\n";
    cin >> n >> m;
    transp(n,m);
    return 0;
}
/*
Napisati funkciju "transp" koja formira transponovanu matricu i glavni program koji je testira za unjetu matricu
*/