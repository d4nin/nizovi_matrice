#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Koliko nebeskih tijela?\n";
    cin >> n;
    float a[n];
    cout << "Unesite magnitude nebeskih tijela!\n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(a[j] > a[j + 1]) {
                float temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp; 
            }
        }
    }
    if(n < 4) {
        cout << "Najsjajniji objekti:\n";
        for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
    }
    cout << "4. najsjajnija objekata:\n";
    for(int i = 0; i < 4; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
/*
Sjaj zvijedzda (i nebeskih tijela) iskazuje se u magnitudama. Sto je tjelo sjajnije, to je magnituda manja (sjaj
Sunca je -26.8, pug Mjeseca -24.6, najsjajnije zvijezde na nebu, Sirijusa -1.4, a nesto manje sjajne zvijezde Deneb
1.25). U nizu a[n] nalaze se magnitude n nebeskih tijela. Potrebno ga je ispisati sortiranog od najsjajnijeg ka 
najmanjem sjajnijem tijelu i ispisati 4 najsjajnija objekta.
*/