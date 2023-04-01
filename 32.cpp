#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Velicina kvadratne matrice?\n";
    cin >> n;
    int mat[n][n];
    int z(0);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Unesite broj na poziciji (" << i << "," << j <<"): ";
            cin >> mat[i][j];
            z += mat[i][j];
        }
    }
    cout << "Zbir elemenata kvadratne matrice: " << z;
    return 0;
}
/*
Ispisati zbir elemenata kvadratne matrice.
*/