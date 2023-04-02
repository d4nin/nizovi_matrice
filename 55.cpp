#include <iostream>
using namespace std;

void ukloniElement(int n) {
    int b[n], element;
    int brNepoklapanja(0);
    cout << "Unesite elemente niza b!\n";
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    cout << "Unesite element!\n";
    cin >> element;
    for(int i = 0; i < n; i++) {
        if(b[i] != element) brNepoklapanja++;
    }
    int noviB[brNepoklapanja];
    int j(0);
    for(int i = 0; i < n; i++) {
        if(b[i] != element) {
            noviB[j] = b[i];
            j++;
        }
    }

    cout << "Novi niz\n";
    for(int i = 0; i < brNepoklapanja; i++) {
        cout << noviB[i] << " ";
    }
}

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;
    ukloniElement(n);
    return 0;
}
/*
Napisati funkciju koja uklanja sve elemente niza b koji su jednaki datom elementu i kao rezultat vraca izmjenjeni niz
*/