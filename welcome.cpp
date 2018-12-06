//
// Created by Poncoe on 18/11/18.
//

// ASCII GENERATOR by patorjk
// http://patorjk.com/software/taag/#p=display&f=Graffiti&t=Type%20Something%20

#include <iostream>
#include "welcome.h"

using namespace std;

int valid() {


    std::cout << R"(____    ____  ___       __       __   _______
\   \  /   / /   \     |  |     |  | |       \
 \   \/   / /  ^  \    |  |     |  | |  .--.  |
  \      / /  /_\  \   |  |     |  | |  |  |  |
   \    / /  _____  \  |  `----.|  | |  '--'  |
    \__/ /__/     \__\ |_______||__| |_______/
                                               )" << '\n';
}

int tidakValid() {


    std::cout << R"(.___________. __   _______       ___       __  ___    ____    ____  ___       __       __   _______
|           ||  | |       \     /   \     |  |/  /    \   \  /   / /   \     |  |     |  | |       \
`---|  |----`|  | |  .--.  |   /  ^  \    |  '  /      \   \/   / /  ^  \    |  |     |  | |  .--.  |
    |  |     |  | |  |  |  |  /  /_\  \   |    <        \      / /  /_\  \   |  |     |  | |  |  |  |
    |  |     |  | |  '--'  | /  _____  \  |  .  \        \    / /  _____  \  |  `----.|  | |  '--'  |
    |__|     |__| |_______/ /__/     \__\ |__|\__\        \__/ /__/     \__\ |_______||__| |_______/
                                                                                                     )" << '\n';
}

int welcomeIndo() {


    std::cout << R"(.______      ___      .______          _______. _______ .______         .___________..______        ___
|   _  \    /   \     |   _  \        /       ||   ____||   _  \        |           ||   _  \      /   \
|  |_)  |  /  ^  \    |  |_)  |      |   (----`|  |__   |  |_)  |       `---|  |----`|  |_)  |    /  ^  \
|   ___/  /  /_\  \   |      /        \   \    |   __|  |      /            |  |     |   _  <    /  /_\  \
|  |     /  _____  \  |  |\  \----.----)   |   |  |____ |  |\  \----.       |  |     |  |_)  |  /  _____  \
| _|    /__/     \__\ | _| `._____|_______/    |_______|| _| `._____|       |__|     |______/  /__/     \__\
                                                                                                             )" << '\n';

    //Tulisan Kotak nya

    std::cout << R"(
|==================================================================================|
|Selamat Datang di Aplikasi Parser TBA Recognizer, Parser ini berdasarkan kata SPOK|
|Dalam Aplikasi ini menggunakan Char Matching untuk menentukan Kalimat.            |
|                                                                                  |
|Arief Wardhana (1301173708) IF-41-04 Teknik Informatika                           |
|Telkom University 2018.                                                           |
|                                                                                  |
|__________________________________________________________________________________|
|                                                                                  |
|Petunjuk Aplikasi.....                                                            |
|                                                                                  |
|Pilihan Kata yang dapat Anda Gunakan :                                            |
|                                                                                  |
|Subjek : Saya, Sani, Susi, Sekar, Septi                                           |
|Predikat : Main, Makan, Mandi, Tidur, Minum                                       |
|Objek : Air, Game, Nasi, Coklat, Teh                                              |
|Keterangan : Tadi, Sekarang, Besok, Kemarin                                       |
|==================================================================================|
)" << '\n';

}
