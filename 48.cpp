#include <iostream>
using namespace std;

double lagrange(double x, double y[], double f[], int n);

int main() {
    int n;
    cout << "Unesite broj tacaka: ";
    cin >> n;
    double x[n], f[n];
    for(int i=0; i<n; i++) {
        cout << "Unesite x_" << i << ": ";
        cin >> x[i];
        cout << "Unesite f(x_" << i << "): ";
        cin >> f[i];
    }
    double x_value;
    cout << "Unesite vrijednost x za koju zelite izracunati f(x): ";
    cin >> x_value;
    double result = lagrange(x_value, x, f, n);
    cout << "f(" << x_value << ") = " << result << endl;
    return 0;
}

double lagrange(double x, double y[], double f[], int n) {
    double result = 0;
    for(int i=0; i<=n; i++) {
        double term = f[i];
        for(int j=0; j<=n; j++) {
            if(j != i) {
                term *= (x - y[j])/(y[i] - y[j]);
            }
        }
        result += term;
    }
    return result;
}
/*
Napisati funkciju lagranz koja koristeci langrazov interpolacioni polinom izracunava vrijednost funkcije f(x) za datu
vrijednost x. U glavnom programu se unosi niz vrijednosti x i niz odgovarajucih vrijednosti f(x). Kao rezultat se
ispisuje vrijednost funkcije za vrijednost koji unosi korisnik.
*/