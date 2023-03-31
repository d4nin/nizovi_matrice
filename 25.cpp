#include <iostream>
using namespace std;

void sort(int n) {
    int a[n];
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(a[j] > a[j + 1]) {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
    int R;
    cout << "Unesite broj R!\n";
    cin >> R;
    int i(0);
    while(i < n && a[i] < R) {
        i++;
    }

    for(int j = n - 1; j >= i; j--) {
        a[j + 1] = a[j];
    }

    a[i] = R;
    cout << "Sortiran niz sa ubacemin brojem R:\n";
    for(int i = 0; i < n + 1; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;
    sort(n);
    return 0;
}
/*
Napisati funkciju koja ubacuje broj R u sortiran niz a.
*/