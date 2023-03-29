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
    cout << "Broj P?\n";
    int P, z(0);
    cin >> P;
    for(int i = 0; i < n; i++) {
        if(niz[i] != P) z += niz[i];
    }
    cout << "Zbir elemenata:\n" << z;
    return 0;
}
/*
Dat je niz realnih brojeva. Potrebno je odrediti zbir elemenata koji
prethode prvom pojavljivanju datog realnog broja P u nizu.
*/