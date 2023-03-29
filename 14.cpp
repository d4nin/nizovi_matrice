#include <iostream>
using namespace std;

void provjera(int n) {
    int niz[n];
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
    }
    for(int i = 0; i < n; i++) {
        if(niz[i] + 1 != niz[i] && niz[i] - 1 != niz[i]) {
            cout << niz[i] << " razlicit je susjedan!\n";
        }
    }
}

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;
    provjera(n);
    return 0;
}
/*
Pomocu funkcije provjera provjeriti da li su svaka dva susjedna elementa
niza a razlicita. Napati glavni program u kome ce se unositi niz a i
provjeravati da li su susjedni elementi razliciti.
*/