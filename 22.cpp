#include <iostream>
using namespace std;

void InsertionSort(int n) {
    int niz[n];
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
    }
    int j(0);  
    for(int i = 1; i < n; i++) {
        j = i;
        while(j > 0 && niz[j - 1] > niz[j]) {
            swap(niz[j], niz[j - 1]);
            j -= 1;
        }
        if(j == 0 && niz[j + 1] < niz[j]) {
            swap(niz[j], niz[j + 1]);
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
    InsertionSort(n);
    return 0;
}
/*
Napisati funkciju koja implementira algoritam insertion sort.
*/