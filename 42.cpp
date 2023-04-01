#include <iostream>
using namespace std;

void zamjeni_red(int n, int m) {
    int a[n][m];
    int k, p;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << "Unesite broj na indexu [" << i << "," << j << "]: ";
            cin >> a[i][j];
        }
    }
    cout << "Unesite red k i p:\n";
    cin >> k >> p;
    k--;
    p--;
    if(k >= 0 && k < n && p >= 0 && p < n) {
        for(int j = 0; j < m; j++) {
            int temp = a[k][j];
            a[k][j] = a[p][j];
            a[p][j] = temp;
        }
        cout << "Nova matrica:\n";
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Neispravan unos za k i p.\n";
    }
}

int main() {
    int n, m;
    cout << "Velicina matrice?\n";
    cin >> n >> m;
    zamjeni_red(n,m);
    return 0;
}
/*
Napisati program koju matricu a[n][m] mijenja da joj k-ti i p-ti red zamjenje mjesta
*/