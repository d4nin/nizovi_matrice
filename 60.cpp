#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Velicina matrice?\n";
    cin >> n;
    int mat[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            mat[i][j] = (i + j) % n + 1;
        }
    }
    cout << "Ispis matrice:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
Potrebno je popuniti kvadratnu kvadratnu matricu a na zadati nacin. Npr. za unjetu dimenziju 4 treba formirati i 
ispisati matricu oblika:
1 2 3 4
2 3 4 1
3 4 1 2
4 1 2 3
*/