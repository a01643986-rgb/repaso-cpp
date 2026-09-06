#include <iostream>
#include <limits>

void limpiarLinea() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int leerEnRango(const std::string& msg, int lo, int high) {
    int value = 0;

    while (true) {
        std::cout << msg;
        
        if (!(std::cin >> value)) {
            std::cout << "Esto no es un número\n";
            limpiarLinea();
        }

        else if (value >= lo && value <= high) {
            limpiarLinea();
            return value;
        }
        else {
            std::cout << "Valor fuera de rango, ingrese un número entre el 1 y el 100 para continuar" << std::endl;
            limpiarLinea();
        }
    }
}

int main () {
    int numero = leerEnRango("Ingrese un número del 1 al 100: ", 1, 100);
    std::cout << "Insertaste " << numero << " el cual es válido, felcidades" << std::endl;
    return 0;
}