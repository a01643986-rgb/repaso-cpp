#include <iostream>

int main() { 
    const int N = 5;
    int d[N] = {10, 20, 30, 40, 50}; 

    int suma = 0;                            // A: sumar todo
    for (int i = 0; i <= N; i++) 
        suma += d[i];

    // Aquí corregiría la parte que señala que i debe ser menor o igual que N
    // porque tenemos que N es 5, pero al momento de checar los índices
    // N debe de ser N-1 porque pues va de 0 a 4, entonces pondría i <= N-1

    int cuantos = 0;                         // B: contar > 25
    for (int i = 1; i < N; i++)
        if (d[i] > 25) cuantos++;

    // En este segundo problema, estamos inicializando el índice en 1 por
    // algún motivo, por lo que no toma en cuanto al primer valor (valor 0,
    // o sea, el 10), así que cambiaría eso para que pusiera i = 0

    //  Los primeros no tienen std::cout que imprima, entonces no imprimirían nada
    // jaja, pero si tuviera que adivinar, pues el primero imprimiría un valor
    // basura porque el índice se va más allá, y el segundo sumaría solo 20,
    // 30, 40 y 50, entonces daría 140 en vez de 150

    int k = 0;                               // C: imprimir todo
    while (k < N) { std::cout << d[k] << ' '; }

    // Este estuvo medio raro, pero luego vi que no tenía nada que fuera 
    // moviendo el índice, por lo que siempre iba a imprimir el primer valor [10]
    // y nunca acabaría porque pues se cumple la condición, entonces acá se debe
    // agregar algo que vaya sumándole al índice, entonces k++ en las llaves

}