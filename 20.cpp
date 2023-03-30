#include <iostream>
using namespace std;

void BubbleSort(int n){ 
    int niz[n];
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(niz[j] > niz[j + 1]) {
                int temp = niz[j + 1];
                niz[j + 1] = niz[j];
                niz[j] = temp;
            }
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
    BubbleSort(n);
    return 0;
}
/*
Napisati funkciju koja implementira algoritam bubble sort.
*/