#include <iostream>
#include "TBA.h"

using namespace std;

int main()
{
    cout<< "Selamat Datang di Tugas Besar Teori Bahasa dan Automata"<<endl<<endl;
    cout<< "Nama  : "<< " 1. Ni Luh Made Dita Anjani \t (1301174676)"<<endl;
    cout<< "Kelas : " << " IFIK-41-01"<< endl << endl;

    cout << "Berikut pilihan kata yang dapat anda pilih :"<<endl << endl;
    cout << "_________________________________________" << endl;
    cout << "|NO|SUBJEK|PREDIKAT|OBJEK    |KETERANGAN|" << endl;
    cout << "_________________________________________" << endl;
    cout << "|1 |Saya  |Main    |Air      |Besok     |" << endl;
    cout << "|2 |Sani  |Makan   |Jus      |Kemarin   |" << endl;
    cout << "|3 |Susi  |Mandi   |Kelereng |Lusa      |" << endl;
    cout << "|4 |Sekar |Minum   |Nasi     |Sekarang  |" << endl;
    cout << "|5 |Septi |Tidur   |Permen   |Tadi      |" << endl;
    cout << "_________________________________________" << endl << endl;
    cout << "Syarat kalimat valid yaitu membentuk pola : " << endl;
    cout << "1. SPOK" << endl;
    cout << "2. SPO" << endl;
    cout << "3. SPK" << endl;
    cout << "4. SP" << endl << endl;

    string kalimat;
    myStack S,kata1,kata2,kata3,kata4,kata5;
    address P,Q;
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
        cout << endl << "Hasil : Kalimat Valid" << endl;
    }
    else {
        cout << endl << "Hasil : Kalimat Tidak Valid" << endl;
    }
}
