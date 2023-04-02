#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    cout << "Unesite broj N: ";
    cin >> n;

    // brojanje pojavljivanja cifara
    int count[10] = {0};
    while(n != 0) {
        int digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    // pronalazak najcesce ponavljajuce cifre
    int max_count = -1, max_digit = -1;
    for(int i = 0; i < 10; i++) {
        if(count[i] > max_count) {
            max_count = count[i];
            max_digit = i;
        }
    }

    // ispisivanje rezultata
    cout << "Cifra " << max_digit << " se najvise puta ponovila (" << max_count << " puta)." << endl;

    return 0;
}
/*
Program treba da ispise koja se cifra u datom broju N najvise puta ponovila.
*/