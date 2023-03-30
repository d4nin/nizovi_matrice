#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, x1, x2;
    cout << "Velicina polinoma?\n";
    cin >> n;
    cout << "Unesite x za P i Q!\n";
    cin >> x1 >> x2;
    int P[n], Q[n];
    cout << "Unesite koefcijente polinoma P!\n";
    for(int i = 0; i < n; i++) {
        cin >> P[i];
    }
    cout << "Unesite koefcijente polinoma Q!\n";
    for(int i = 0; i < n; i++) {
        cin >> Q[i];
    }
    int P1(0), Q1(0);
    for(int i = 0; i < n; i++) {
        P1 += P[i] * pow(x1,i);
        Q1 += Q[i] * pow(x2,i);
    }
    cout << "Zbir polinoma iznosi: " << P1 + Q1 << '\n';
    cout << "Proizvod polinoma iznosi: " << P1 * Q1; 
    return 0;
}
/*
Ako su dva polinoma P(x) i Q(x) dati nizom svojih koefcijenata, napisati program koji racuna
njihov zbir i proizvod pomocu odgovarajucih funkcija.
*/