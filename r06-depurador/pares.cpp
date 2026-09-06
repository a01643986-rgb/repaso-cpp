#include <iostream>

int pares(const int v[], int n) { // B
    int c = 0;
    for (int i = 0; i < n; i++)
    // Acá vamos a cortar cuando el residuo sea 0 para tener los pares, si lo 
    // dejáramos como esá, nos brindaría los impares
        if (v[i] % 2 == 0) c++;
    return c;
}

int main() {
    int valores[] = {11, 20, 35, 40, 57};
    int cantidad = 5;

    int par = pares(valores, cantidad);
    std::cout << "Los pares son: " << par << std::endl;
    
    return 0;
}