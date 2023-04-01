#include <iostream>
using namespace std;

int main() {
    int n,m;
    cout << "Velicina matrica?\n";
    cin >> n >> m;
    int mat1[n][m], mat2[n][m];
    int z[n][m], o[n][m], p[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << "Unesite brojeve prve matrice: (" << i << "," << j <<"): ";
            cin >> mat1[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << "Unesite brojeve druge matrice: (" << i << "," << j <<"): ";
            cin >> mat2[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            z[i][j] = mat1[i][j] + mat2[i][j];
            o[i][j] = mat1[i][j] - mat2[i][j];
            p[i][j] = mat1[i][j] * mat2[i][j];
        }
    }
    cout << "Zbir elemenata matrice:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << z[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Razlika elemenata matrice:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << o[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Proizvod elemenata matrice:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
Napisati program koji omogucava sabiranje, oduzimanje i mnozenje dvije matrice.
*/