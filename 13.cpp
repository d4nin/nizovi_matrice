#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;
    int a[n];
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int br(0);
    for(int i = 0; i < n; i++) {
        if(a[i] * a[i-1] < 0) br++;
        if(a[i] == 0) continue;
    }
    cout << "Broj promjena znaka:\n" << br;
    return 0;
}
/*
U datom nizu a odrediti broj promjena znaka ako nulu racunamo kao
neutralan broj
*/