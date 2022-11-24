#include "Moto.h"

void Moto::engatar(char r) {
    if((char)toupper(r) == 'R') {
        cout << "Moto não tem ré! Empurre a moto!" << endl;
    }
    else {
        cout << "Não é possível engatar essa marcha no " << typeid(*this).name() << " " << this->modelo << "." << endl;
    }
}

Moto::Moto(string modelo, string tipo, float potencia, int ano) : Veiculo(modelo, tipo, potencia, ano) {

}

Moto::~Moto() {
    cout << "Objeto Moto Destruído com Sucesso!" << endl;
}
