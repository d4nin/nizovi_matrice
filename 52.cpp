#include <iostream>
using namespace std;

int main() {
    int n; 
    cout << "Velicina niza?\n";
    cin >> n;
    float a[n], b[n];
    cout << "Unesite elemente niza a!\n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        b[i] = (a[i] + a[i + 1] + a[i + 2])/3;
    }
    cout << "Niz b:\n";
    for(int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    return 0;
}
/*
Napisati programkoji na osnovu unjetog niza a formira niz b koji se sastoji iz aritmeticke sredine tri elemenata niza
a, i to na sljedeci nacin:
b[i] = (a[i] + a[i+1] + a[i+2])/3
*/