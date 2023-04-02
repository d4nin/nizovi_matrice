#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;
    int a[n], b[n], c[n];
    cout << "Unesite elemente niza a!\n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Unesite elemente niza b!\n";
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for(int i = 0; i < n; i++) {
        c[i] = a[i] + b[n - 1 - i];
    }
    cout << "Niz c:\n";
    for(int i = 0; i < n; i++) {
        cout << c[i] << " ";
    }
    return 0;
}
/*
na osnovu niza a[n] i b[n], formirati niz c[n] po sljedecoj formuli:
c[i] = a[i] + b[n - 1 - i]
*/