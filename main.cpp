#include <iostream>
#include "stack.h"
#include "welcome.h"

using namespace std;

int main()
{
    // Variabel

    string kalimat;
    myStack S,kata1,kata2,kata3,kata4,kata5;
    address P,Q;

    //Program

    welcomeIndo();
    cout << "" <<endl;
    cout << "Masukkan kalimat : ";
    getline(cin, kalimat);
    kalimat = kalimat + ' ';

    int z = kalimat.length();
    int y = 1;

    createStack(S);
    createStack(kata1);
    createStack(kata2);
    createStack(kata3);
    createStack(kata4);
    createStack(kata5);
    for (int x =0; x<z; x++){
        if (kalimat[x] != ' ' ){
            createNewElmt(kalimat[x],P);
            push(S,P);
        }
        else if (kalimat[x] == ' '){
            if (y == 1){
                while (!isEmpty(S)){
                    pop(S,P);
                    createNewElmt(info(P),Q);
                    push(kata1,Q);
                }
                y = y + 1;
            }
            else if (y == 2){
                while (!isEmpty(S)){
                    pop(S,P);
                    createNewElmt(info(P),Q);
                    push(kata2,Q);
                }
                y = y + 1;
            }
            else if (y == 3){
                while (!isEmpty(S)){
                    pop(S,P);
                    createNewElmt(info(P),Q);
                    push(kata3,Q);
                }
                y = y + 1;
            }
            else if (y == 4){
                while (!isEmpty(S)){
                    pop(S,P);
                    createNewElmt(info(P),Q);
                    push(kata4,Q);
                }
                y = y + 1;
            }
            else if (y == 5){
                while (!isEmpty(S)){
                    pop(S,P);
                    createNewElmt(info(P),Q);
                    push(kata5,Q);
                }
                y = y + 1;
            }
        }
    }

    bool cek = cekKalimat(kata1,kata2,kata3,kata4,kata5);
    if (cek){
        valid();
        cout << endl << "Hasil : Kalimat Valid. Program Otomatis Keluar" << endl;
    }
    else {
        tidakValid();
        cout << endl << "Hasil : Kalimat Tidak Valid. Program Otomatis Keluar" << endl;
    }
}
