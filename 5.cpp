#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;
    float a[n];
    cout << "Unos elemenata niza:\n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Niz b:\n";
    float b[n];
    for(int i = 0; i < n; i++) {
        if(a[i] != 1) {
            b[i] = a[i] / (a[i] - 1);
            cout << b[i] << '\n';
        }
    }
    return 0;
}
/*
Napisati program koji na osnovu datog niza a[n], formira niz b[n],
tako da vazi:
b[i] = a[i] / a[i+1]
*/