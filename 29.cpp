#include <iostream>
using namespace std;

bool prosti(int niz) {
    if(niz <= 1) return false;
    for(int i = 2; i < niz; i++) {
        if(niz % i == 0) return false;
    }
    return true;
}

void aritmetcika(int n) {
    int niz[n];
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
    }
    float s1(0), s2(0);
    float br1(0), br2(0);
    for(int i = 0; i < n; i++) {
        if(niz[i] % 2 == 0) {
            s1 += niz[i];
            br1++;
        }
        if(prosti(niz[i])) {
            s2 += niz[i];
            br2++;
        }
    }
   cout << "Aritmeticka sredina parnih clanova: " << s1 / br1 << '\n';
   cout << "Aritmeticka sredina prostih clanova: " << s2 / br2; 
}

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;
    aritmetcika(n);
    return 0;
}
/*
Napisati funckiju koja istovremeno racuna aritmeticku sredinu parnih clanova i aritmeticku sredinu prostih clanova
unjetog niza a.
*/