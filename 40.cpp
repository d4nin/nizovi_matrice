#include <iostream>
using namespace std;

bool simetrican(int n) {
    int mat[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Unesi broj na indexu [" << i << "," << j << "]: ";
            cin >> mat[i][j]; 
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j && mat[i][j] != mat[j][i]) return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Velicina matrice?\n";
    cin >> n;
    if(simetrican(n)) cout << "Matrica je simetricna.";
    else cout << "Matrica nije simetricna.";
    return 0;
}
/*
Napisati funkciju koja provjerava da li je kvadratna matrica simetricna u odnosu na glavnu dijagonalu
*/