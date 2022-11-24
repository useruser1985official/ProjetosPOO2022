#include "Calculos.h"

// Todos Estáticos
int Calculos::quadrado(int num) {
    if(num <= 0) {
        throw "Insira um valor maior que zero!";
    }

    return num * num;
}

int Calculos::cubo(int num) {
    if(num <= 0) {
        throw "Insira um valor maior que zero!";
    }

    return num * num * num;
}

string Calculos::fatorial(int num) {
    if(num <= 0) {
        throw "Insira um valor maior que zero!";
    }

    int fat = 1;
    string saida = "";

    while(num >= 1) {
        fat *= num;

        saida += to_string(num);

        saida += num > 1 ? " x " : " = ";

        num--;
    }

    saida += to_string(fat);

    return saida;
}

string Calculos::fibonacci(int num) {
    if(num <= 0) {
        throw "Insira um valor maior que zero!";
    }

    int t1 = 0;
    int t2 = 1;
    int t3 = 0;
    int cont = 3;

    string said = to_string(t1) + " → " + to_string(t2);

    while(cont <= num) {
        t3 = t1 + t2;
        said += " → " + to_string(t3);
        t1 = t2;
        t2 = t3;
        cont++;
    }

    said += " → FIM";

    return said;
}
