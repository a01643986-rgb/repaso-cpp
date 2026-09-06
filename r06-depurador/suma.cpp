#include <iostream>

int suma(const int v[], int n) { // A
    int s = 0;
    // Acá le vamos a cambiar a i < n en vez de i <= n para evitar un overflow
    for (int i = 0; i < n; i++)
        s += v[i];
    return s;
}

int main() {
    int valores[] = {10, 20, 30};
    int cantidad = 3;

    int resultado = suma(valores, cantidad);
    std::cout << "Resultado: " << resultado << std::endl;

    return 0;  
}