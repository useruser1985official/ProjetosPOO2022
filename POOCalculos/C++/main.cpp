#include <iostream>
#include <cstdlib>
#include <clocale>
#include "Calculos.h"

using namespace std;

int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "portuguese");

    int num;

    cout << "Digite um número inteiro: ";
    cin >> num;

    try {
        cout << "Quadrado de " << num << ": " << Calculos::quadrado(num) << "." << endl;
        cout << "Cubo de " << num << ": " << Calculos::cubo(num) << "." << endl;
        cout << "Fatorial de " << num << ": " << Calculos::fatorial(num) << "." << endl;
        cout << "Fibonacci de " << num << ": " << Calculos::fibonacci(num) << "." << endl;
    }
    catch(const char* ex) {
        cerr << ex << endl;
    }

    return 0;
}
