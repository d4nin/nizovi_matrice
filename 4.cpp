#include <iostream>
using namespace std;

int main() {
    int n; 
    cout << "Velicina niza?\n";
    cin >> n;
    int a[2*n];
    cout << "Unos elemenata niza:\n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Niz b:\n";
    int b[n];
    for(int i = 0; i < n; i++) {
        b[i] = a[i]*2-1;
        cout << b[i] << '\n';
    }
    cout << "Niz c:\n";
    int c[n];
    for(int i = 0; i < n; i++) {
        c[i] = a[i] * 2;
        cout << c[i] << '\n';
    }
    return 0;
}
/*
Napisati program koji od datog niza a[2n] formira nizove b[n] i c[n]
tako da su elementi niza b: a[1], a[3], a[5],..., a[2n-1],
a niza c: a[0], a[2], a[4], a[6],..., a[2n]
*/