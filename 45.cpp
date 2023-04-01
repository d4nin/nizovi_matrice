#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Velicina matrice?\n";
    cin >> n;
    int a[n][n], b[n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Unesite broj na indexu [" << i << "," << j << "]: ";
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        int p = 1;
        for(int j = 0; j < n; j++) {
            p *= a[i][j];
        }
        b[i] = p;
    }
    cout << "Niz b:\n";
    for(int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    return 0;
}
/*
Napisati program kojim se formira niz b ciji su elementi redom jednaki proizvodu elemenata kolone kvadratne matrice a
*/