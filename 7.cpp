#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;
    int a[n], s[n];
    cout << "Unesi elemente niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        int suma = 0;
        for(int j = 0; j < n; j++) {
            if(j != i) {
                suma += a[j];
            }
        }
        if(n > 1){
            s[i] = round((double)suma / (n - 1));
        } else {
            s[i] = 0;
        }
        cout << s[i] << " ";
    }
    return 0;
}


/*
Na osnovu niza a[n], formirati niz s[n] čiji se element s[j] dobija
kao srednja vrijednost niza a iz koga je izbačen element na j-toj 
poziciji.
*/