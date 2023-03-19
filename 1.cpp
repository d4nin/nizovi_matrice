#include <iostream>
using namespace std;

int main() {
    float s(0);
    int ocjene;
    int unosOcjena;
    float prosjek(0);
    for(int i = 0; i < 4; i++) {
        cout << "Koliko ocjena?\n";
        cin >> ocjene;
        cout << "Unesite ocjene za " << i+1 << " godinu!\n";
        for(int j = 0; j < 15; j++) {
            cout << "Unesite ocjene!\n";
            int d(0);
            while(d < ocjene) {
                cin >> unosOcjena;
                prosjek += unosOcjena;
                s += unosOcjena;
                d++;
            }
        }
        cout << "Prosjek za prvi godinu: " << prosjek/15 << endl;
        prosjek = 0;
    }
    cout << "Ukupan prosjek studija: " << s / 15;
    return 0;
}
/*
Ocjene studenta se unose kao elementi niza. Napraviti program koji
izračunava prosjek za svaku godinu studiranja i ukupan prosjek studija,
ako studije traju 4 godine i student nema viđe od 15 predmeta po godini
*/