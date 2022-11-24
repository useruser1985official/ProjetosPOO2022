#include "Caminhao.h"

Caminhao::Caminhao(string modelo, string tipo, float potencia, int ano) : Veiculo(modelo, tipo, potencia, ano) {

}

Caminhao::~Caminhao() {
    cout << "Objeto Caminhão Destruído com Sucesso!" << endl;
}
