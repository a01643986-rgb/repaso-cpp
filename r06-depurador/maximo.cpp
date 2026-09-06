#include <iostream>

int maximo(const int v[], int n) { // C
    // Y aquí vamos a inicializar mejor desde 0 porque si no nos daría basura
    int mejor = v[0];
    for (int i = 1; i < n; i++)
        if (v[i] > mejor)
            mejor = v[i];
    return mejor;
}

int main() {
    int valores[] = {10, 20, 30};
    int cantidad = 3;

    int valorMaximo = maximo(valores, cantidad);
    std::cout << "El valor máximo es: " << valorMaximo << std::endl;

    return 0;
}