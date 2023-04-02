#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;
    int niz[n], br1(0), br2(0);
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
        if(niz[i] > 0) br1++;
        if(niz[i] < 0) br2++;
    }
    cout << "Broj pozitivnih brojeva: " << br1 << '\n';
    cout << "Broj negativnih brojeva: " << br2; 
    return 0;
}
/*
Ucitati niz pd n elemenata i ispisati koliko u njemu ima negativnih, a koliko pozitivnih brojeva
*/