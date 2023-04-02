#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Velicina matrice?\n";
    cin >> n;
    int mat[n][n] = {0};
    int redovi = n;
    int stupci = n;
    int red(0), kolona(0), br(1);
    while(red < redovi && kolona < stupci) {
        //Popunjavanje gornjeg reda
        for(int i = kolona; i < stupci; i++) {
            mat[red][i] = br;
            br++;
        }
        red++;

        //Popunjavanje desne kolone
        for(int i = red; i < redovi; i++) {
            mat[i][stupci - 1] = br;
            br++;
        }
        stupci--;

        //Popunjavanje donjeg reda
        if(red < redovi) {
            for(int i = stupci - 1; i >= kolona; i--) {
                mat[redovi - 1][i] = br;
                br++;
            }
            redovi--;
        }

        //Popunjavanje lijeve kolone
        if(kolona < stupci) {
            for(int i = redovi - 1; i >= red; i--) {
                mat[i][kolona] = br;
                br++;
            }
            kolona++;
        }
    }
    cout << "Ispis matrice:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
Napisati program koji za odgovarajuce N formira i ispisuje kvadratnu matricu sljedeceg oblika, npr za N = 4:
   1   2   3   4
  12  13  14   5
  11  16  15   6
  10   9   8   7
*/