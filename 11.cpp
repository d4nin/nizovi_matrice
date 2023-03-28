#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;
    int a[n];
    cout << "Unesite elemente niza a!\n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int b[n];
    cout << "Niz b:\n";
    for(int i = n - 1; i >= 0; i--) {
        b[i] = a[i];
    }
    for(int i = n - 1; i >= 0; i--) {
        cout << b[i] << '\n';
    }
    return 0;
}
/*
Napisati program koji za osnovu unjetog niza a formira niz b sastavljen
od elemenata niza a kojima su cifre poredane obrnutim redoslijedom.
*/