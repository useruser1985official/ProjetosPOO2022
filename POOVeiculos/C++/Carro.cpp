#include "Carro.h"

Carro::Carro(string modelo, string tipo, float potencia, int ano) : Veiculo(modelo, tipo, potencia, ano) {

}

Carro::~Carro() {
    cout << "Objeto Carro Destruído com Sucesso!" << endl;
}
