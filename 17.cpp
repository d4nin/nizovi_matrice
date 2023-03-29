#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;
    int x[n];
    cout << "Unesite elemente niza x!\n";
    for(int i = 0; i < n; i++) {
        cin >> x[i];
    }
    int P(0);
    for(int i = 0; i < n; i++) {
        P += i + (i * pow(x[i],i));
    }
    cout << "Vrijednost polinoma P: " << P;
    return 0;
}
/*
Ako je polinom P(x) = a0 + a1x + a2x^2 +...+ anx^n dat nizom svojih koefcijenata, napisati
program koji izracunava vrijednost polinoma za dato x.
*/