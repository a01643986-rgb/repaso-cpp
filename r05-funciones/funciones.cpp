#include <iostream>

void pedirNotas (double notas[], int cantidad) {
     for (int i = 0; i < cantidad; i++) {
        std::cout << "Nota " << i + 1 << ": ";
        std::cin >> notas[i];
    }
}

double calcularPromedio(double notas[], int cantidad) {
    double suma = 0;
     for (int i = 0; i < cantidad; i++) {
         suma += notas[i];
     }
  return suma / cantidad;
}

void decidirAprobacion(double promedio) {
    std::cout << "Promedio: " << promedio << '\n';
    if (promedio >= 70) {
        std::cout << "Aprobado\n";
    } else {
        std::cout << "Reprobado\n";
    }              
}

int main() {
    int cantidad = 3;
    double notas[cantidad];

    pedirNotas(notas, cantidad);
    double prom = calcularPromedio(notas, cantidad);
    decidirAprobacion(prom);

    return 0;
}