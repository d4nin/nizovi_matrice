#include <iostream>
using namespace std;

bool prosti(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n; 
    cout << "Velicina niza?\n";
    cin >> n;
    int a[n], b[n];
    int br(0);
    cout << "Unesite clanove niza a!\n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(prosti(a[i])) {
            b[br] = a[i];
            br++;
        }
    }
    for(int i = 0; i < br; i++) {
        for(int j = 0; j < br - 1 - i; j++) {
            if(b[j] > b[j + 1]) {
                int temp = b[j + 1];
                b[j + 1] = b[j];
                b[j] = temp;
            }
        }
    }
    cout << "Sortirani prosti brojevi:\n";
    for(int i = br - 1; i >= 0; i--) {
        cout << b[i] << " ";
    }
    return 0;
}
/*
Na osnovu unjetog niza a, formirati niz b koji se sastoji iz prostih clanova niza a sortiranih u
opadajucem poretku.
*/