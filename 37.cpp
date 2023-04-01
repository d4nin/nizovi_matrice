#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Velicina matrice?\n";
    cin >> n;
    int a[n][n], b[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Unesite broj na indexu [" << i << "," << j << "]: ";
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i + j == n - 1) b[i][j] = a[i][j];
            else if(i == j) b[i][j] = a[i][j];
            else b[i][j] = 0;
        }
    }
    cout << "Matrica b:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
Napisati program kojim se na osnovu kvadratne matrice a formira matrica b tako da su joj sporedna i glavna dijagonala
jednake sporednoj i glavnoj dijagonali matrice a, dok su ostali elementi jednaki 0
*/