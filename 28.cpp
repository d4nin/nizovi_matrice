#include <iostream>
using namespace std;

void najmanjaNajveca(int n) {
    int niz[n];
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
    }
    int tmin(n), tmax(0);
    for(int i = 0;  i < n; i++) {
        if(tmax < niz[i]) tmax = niz[i];
        if(tmin > niz[i]) tmin = niz[i];
    }
    cout << "Najmanja vrijednost niza: " << tmin << '\n';
    cout << "Najveca vrijednost niza: " << tmax; 
}

int main() { 
    int n;
    cout << "Velicina niza?\n";
    cin >> n;
    najmanjaNajveca(n);
    return 0;
}
/*
Napisati funkciju koja istovremeno vraca najmanju i najvecu vrijednost niza.
*/