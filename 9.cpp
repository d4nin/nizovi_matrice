#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;
    int niz[n];
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
    }
    for(int i = 0; i < n; i++) {
        if(niz[i] % 2 == 0) {
            for(int j = i; j > 0; j--) {
                swap(niz[j], niz[j - 1]);
            }
        }
    }
    cout << "Sortiran niz:\n";
    for(int i = 0; i < n; i++) {
        cout << niz[i] << " ";
    }
    return 0;
}
/*
Napisati funkciju koja parne elemente niza a premesta na pocetak, a
neparne na kraj.
*/