#include <iostream>
using namespace std;

void merge(int niz[], int lijevo, int lijevaN, int desno, int desnaN) {
    int i = 0, j = 0, k = lijevo;
    int lijeviNiz[lijevaN], desniNiz[desnaN];

    for (i = 0; i < lijevaN; i++) {
        lijeviNiz[i] = niz[lijevo + i];
    }

    for (j = 0; j < desnaN; j++) {
        desniNiz[j] = niz[desno + j];
    }

    i = 0;
    j = 0;

    while (i < lijevaN && j < desnaN) {
        if (lijeviNiz[i] <= desniNiz[j]) {
            niz[k] = lijeviNiz[i];
            i++;
        } else {
            niz[k] = desniNiz[j];
            j++;
        }
        k++;
    }

    while (i < lijevaN) {
        niz[k] = lijeviNiz[i];
        i++;
        k++;
    }

    while (j < desnaN) {
        niz[k] = desniNiz[j];
        j++;
        k++;
    }
}
void MergeSort(int niz[], int lijevo, int desno) {
    if (lijevo < desno) {
        int sredina = lijevo + (desno - lijevo) / 2;
        MergeSort(niz, lijevo, sredina);
        MergeSort(niz, sredina + 1, desno);
        merge(niz, lijevo, sredina - lijevo + 1, sredina + 1, desno - sredina);
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

    MergeSort(niz, 0, n - 1);

    cout << "Sortiran niz:\n";
    for(int i = 0; i < n; i++) {
        cout << niz[i] << " ";
    }
    return 0;
}
/*
Napisati funkciju koja implementira algoritam merge sort.
*/