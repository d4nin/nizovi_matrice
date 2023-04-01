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
    int br, index;
    cout << "Unesite broj za umetanje i na kojem indexu!\n";
    cin >> br >> index;
    if(index > n) {
        niz[n] = br;
        n++;
        cout << "Niz sa umetnutim brojem:\n";
        for(int i = 0; i < n; i++) {
            cout << niz[i] << " ";
        }
    }
    else if(index < 0) {
        for(int i = n - 1; i >= 0; i--) {
            niz[i + 1] = niz[i];
        }
        niz[0] = br;
        n++;
        cout << "Niz sa umetnutim brojem:\n";
        for(int i = 0; i < n; i++) {
            cout << niz[i] << " ";
        }
    }
    else { 
        for(int i = n; i > index; i--) {
            niz[i] = niz[i - 1];
        }
        niz[index] = br;
        n++;
        cout << "Niz sa umetnutim brojem:\n";
        for(int i = 0; i < n; i++) {
            cout << niz[i] << " ";
        }
    }
    return 0;
}
/*
Napisati program koji u niz umece broj na indexu koji korisnik unese.
*/