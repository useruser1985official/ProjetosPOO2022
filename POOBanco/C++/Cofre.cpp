#include "Cofre.h"

// Métodos sobrepostos
void Cofre::depositar(Valor *vl) {
    if(vl->getVale() >= 0) {
        this->total += vl->getVale();

        printf("Foi depositada no cofre a quantia de R$%.2f.\n", vl->getVale());
    }
    else {
        cout << "Não é possível depositar esse valor no cofre!" << endl;
    }
}

void Cofre::retirar(float qt) {
    if(qt >= 0) {
        if(qt > this->total) {
            printf("Foi retirada do cofre a quantia de R$%.2f.\n", this->total);

            this->total -= this->total;
        }
        else {
            printf("Foi retirada do cofre a quantia de R$%.2f.\n", qt);

            this->total -= qt;
        }
    }
    else {
        cout << "Não é possível retirar esse valor do cofre!" << endl;
    }
}

void Cofre::verificar() {
    printf("O valor total dentro do cofre é de R$%.2f.\n", this->total);
}

// Construtor e Destrutor
Cofre::Cofre() {
    this->total = 0;
}

Cofre::~Cofre() {
    cout << "Objeto Cofre Destruído com Sucesso!" << endl;
}

// Getter
const float Cofre::getTotal() {
    return this->total;
}

// Setter
void Cofre::setTotal(float total) {
    this->total = total;
}
