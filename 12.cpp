#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;
    cout << "Unesite elemente niza!\n";
    int a[n];
    vector<int> b;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int C;
    cout << "Unesite cifru C!\n";
    cin >> C;
    cout << "Niz b:\n";
    for(int i = 0; i < n; i++) {
        if((a[i] == C) || (a[i] % 10 == C)) b.push_back(a[i]);
    }
    for(int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }
    return 0;
}
/*
Napisati program koji na osnovu unjetog niza a, formira niz b sastavljen
od elemenata niza a koji sadrze cifru C.
*/