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
    int x,y;
    cout << "Unesite x i y!\n";
    cin >> x >> y;
    int i;
    while(i < n && niz[i] != x) i++;
    if(i == n) cout << "Vrijednost x se ne pojavljuje u nizu!\n";
    int j = i + 1;
    while(j < n && niz[j] != y) j++;
    if(j == n) cout << "Vrijednost j se ne pojavljuje u nizu!\n";
    int p(1);
    for(int k = i + 1; k < j; k++) p *= niz[k];
    cout << "Proivod elemenata: " << p;
    return 0;
}
/*
Korisnik unosi celobrojni niz a i celobrojne vrijednosti x i y.
Odrediti proizvod elemenata u nizu a koji se nalaze izmedu prve pojave
vrijednosti x u nizu i prve pojave vrijednost y u nizu
*/