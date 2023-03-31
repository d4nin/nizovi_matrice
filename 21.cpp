#include <iostream>
using namespace std;

void SelectionSort(int n) {
    int niz[n];
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
    }
    int tmin(0);
    for(int i = 0; i < n - 1; i++) {
        tmin = i;
        for(int j = i + 1; j < n; j++) {
            if(niz[j] < niz[tmin]) {
                tmin = j;
            }
        }
        if(tmin != i) {
            swap(niz[i], niz[tmin]);
        }
    }
    cout << "Sortiran niz:\n";
    for(int i = 0; i < n; i++) {
        cout << niz[i] << " ";
    }
}

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;
    int niz[n];
    SelectionSort(n);
    return 0;
}
/*
Napisati funkciju koja implementira algoritam selection sort
*/