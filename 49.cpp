#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;
    int a[n], p(1);
    cout << "Unesite elemente niza a!\n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        p *= a[i];
    }
    cout << "Proizvod elemenata niza a: " << p;
    return 0;
}
/*
Napisati program koji racuna proizvod elemenata niza a[n];
*/