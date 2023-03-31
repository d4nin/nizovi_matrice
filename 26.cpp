#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;
    int niz[n], parni[n], neparni[n];
    int br1(0), br2(0);
    cout << "Unesite clanove niza!\n";
    for(int i = 0;  i < n; i++) {
        cin >> niz[i];
        if(niz[i] % 2 == 0) {
            parni[br1] = niz[i];
            br1++;
        }
        if(niz[i] % 2 != 0) {
            neparni[br2] = niz[i];
            br2++;
        }
    }
    for(int i = 0; i < br1; i++) {
        for(int j = 0; j < br1 - 1 - i; j++) {
            if(parni[j] > parni[j + 1]) {
                int temp = parni[j + 1];
                parni[j + 1] = parni[j];
                parni[j] = temp;
            }
        }
    }
    cout << "Sortiranje parnih elemenata niza:\n";
    for(int i = 0; i < br1; i++) {
        cout << parni[i] << " ";
    }
    for(int i = 0; i < br2; i++) {
        for(int j = 0; j < br2 - 1 - i; j++) {
            if(neparni[j] > neparni[j + 1]) {
                int temp = neparni[j + 1];
                neparni[j + 1] = neparni[j];
                neparni[j] = temp;
            }
        }
    }
    cout << endl;
    cout << "Sortiranje neparnih elemenata niza:\n";
    for(int i = br2 - 1; i >= 0; i--) {
        cout << neparni[i] << " ";
    }
    return 0;
}
/*
Napisati program koji unjeti niz a sortira tako da elemnti sa parnim indeksima budu sortirani u
rastucem, a na neparnim u opadajucem poretku
*/