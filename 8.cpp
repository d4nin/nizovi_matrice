#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Koliki niz?\n";
    cin >> n;
    int a[n],b[n];
    cout << "Unesi elemente niza a!\n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Unesi elemente niza b!\n";
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int m;
    cout << "Unesite broj tacaka!\n";
    cin >> m;
    int c[m];
    cout << "Unesite tacke:\n";
    for(int i = 0; i < m; i++) {
        int x;
        cin >> x;
        for(int j = 0; j < n; j++) {
            if(x >= a[i] && x <= b[i]) {
                c[i] = j;
            }
        }
    }
    int najkraci = c[0];
    for (int i = 1; i < m; i++) {
        if (b[c[i]] - a[c[i]] < b[najkraci] - a[najkraci]) {
            najkraci = c[i];
        }
    }

    cout << "Najkraci interval je (" << a[najkraci] << ", " << b[najkraci] << ")" << endl;

    return 0;
}

/*
Dato je n intervala pomocu nizova a i b:
(a[0], b[0]), (a[1], b[1]), (a[2], b[2]), (a[n-1], b[n-1]).
Formirati niz c u kome se nalaze indeksi intervala kojima
pripada tacka C, odrediti koji od njih je najkraci i ispisati ga. 
*/