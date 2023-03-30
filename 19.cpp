#include <iostream>
using namespace std;

void sort(int n) {
    int niz[n];
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
    }
    bool lijevo = true, desno = true;
    for(int i = 1; i < n; i++) {  
        if(niz[i] < niz[i-1]) lijevo = false; 
        if(niz[i] > niz[i-1]) desno = false; 
    }
    if(lijevo) cout << "Niz je sortiran sa lijeva na desno.";
    else if(desno) cout << "Niz je sortiran sa desna na lijevo.";
    else cout << "Niz nije sortiran.";
}

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;
    sort(n);
    return 0;
}
/*
Napisati funkciju koja provjerava da li je niz sortiran i, ako jeste, ispisuje kojim je
redoslijedom sortiran.
*/