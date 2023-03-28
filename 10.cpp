#include <iostream>
using namespace std;

int main() {
    int m;
    cout << "Velicina niza?\n";
    cin >> m;
    int a[m], b[m];
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < m; i++) {
        cin >> a[i];
    }
    int n;
    cout << "Koliko mjesta?\n";
    cin >> n;
    for(int i = 0; i < m; i++) {
        b[(i + m - n)%m] = a[i];
    }
    cout << "Niz b cirkularno pomjeren u lijevo za n mjesta:\n";
    for(int i = 0; i < m; i++) {
        cout << b[i] << " ";
    }
    return 0;
}
/*
Napisati program koji na osnovu unetog niza a formira niz b koji sadrzi
sve elemente niza a cirkularno pomjerene u lijevo za n mjesta.
*/