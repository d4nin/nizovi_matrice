#include <iostream>
using namespace std;

int main() {
    int n,p;
    cout << "Koliki niz?\n";
    cin >> n;
    int niz[n];
    cout << "Broj p?\n";
    cin >> p;
    cout << "Unesite clanove niza:\n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
    }
    int br(0);
    for(int i = 0; i < n; i++) {
        if(niz[i] % 2 == 0 && niz[i] > p) br++;
    }
    cout << "Broj ponavljanja parnih brojeva vecih od p: " << br;
    return 0;
}
/*
Napisati program koji racuna koliko u nizu a[n] ima parnih brojeva 
vecih od broja p
*/