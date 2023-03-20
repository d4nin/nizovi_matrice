#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;
    float a[2*n];
    cout << "Unos clanova niza:\n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Niz b:\n";
    float b[n];
    for(int i = 0; i < n; i++) {
        b[i] = (a[i] + (a[i] + 1) - (a[i] - 2*n - 1)) / 2;
        cout << b[i] << '\n';
    }
    return 0;
}
/*
Na osnovu niza a[2n], formirati niz b[n] po formuli:
b[i] = a[i]+a[i+1]-a[2n-1-i]/2
*/