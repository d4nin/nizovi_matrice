#include <iostream>
using namespace std;

void QuickSort(int n, int lijevo, int desno, int niz[]) {
    int i = lijevo, j = desno;
    int pivot = niz[(lijevo + desno) / 2];

    while(i <= j) {
        while(niz[i] < pivot) {
            i++;
        }
        while(niz[j] > pivot) {
            j--;
        }
        if(i <= j) {
            swap(niz[i], niz[j]);
            i++;
            j--;
        }
    }

    if(lijevo < j) {
        QuickSort(n, lijevo, j, niz);
    }
    if(i < desno) {
        QuickSort(n, i, desno, niz);
    }
}

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;

    int niz[n];
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
    }

    QuickSort(n, 0, n - 1, niz);

    cout << "Sortirani niz: ";
    for(int k = 0; k < n; k++) {
        cout << niz[k] << " ";
    }
    cout << endl;

    return 0;
}
/*
Napisati funkciju koja implementira algoritam quick sort.
*/