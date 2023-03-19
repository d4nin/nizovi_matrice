#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Koliki niz?\n";
    cin >> n;
    int niz[n];
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
    }
    int br(0);
    int prev = niz[0];
    for(int i = 0; i < n; i++) {
        if(prev == niz[i]) br++;
        prev = niz[i];
    }
    cout << "Broj ponavljanja svake cifre: " << br;
    return 0;
}
/*
Ispisati broj ponavljanja svake cifre u datom broju n
*/