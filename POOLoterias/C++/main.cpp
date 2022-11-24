#include <iostream>
#include <cstdlib>
#include <clocale>
#include <vector>
#include "Jogo.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    auto linha = [](){cout << "--------------------------------------------------------------------------------------------------------------------" << endl;};

    vector<int> faiLoto{11, 12, 13, 14, 15};
    Loteria *lotofacil = new Jogo(15, 15, 01, 25, faiLoto);
    vector<int> apLoto{1, 3, 4, 6, 8, 9, 10, 11, 12, 15, 17, 18, 21, 23, 25};

    lotofacil->fazerAposta(apLoto);
    lotofacil->sorteio();

    linha();

    vector<int> faiQui{2, 3, 4, 5};
    Loteria *quina = new Jogo(5, 5, 1, 80, faiQui);
    vector<int> apQui{5, 20, 23, 53, 80};

    quina->fazerAposta(apQui);
    quina->sorteio();

    linha();

    vector<int> faiSe{4, 5, 6};
    Loteria *mega = new Jogo(6, 6, 1, 60, faiSe);
    vector<int> apSe{10, 24, 30, 36, 51, 53};

    mega->fazerAposta(apSe);
    mega->sorteio();

    delete lotofacil;
    delete quina;
    delete mega;

    return 0;
}
