#include <iostream>

void intercambiar1(int a, int b) {      // por valor
    int t = a; 
    a = b;
    b = t;
}     

void intercambiar2(int* a, int* b) {    // por puntero
    int t = *a;
    *a = *b;
    *b = t;
}   

void intercambiar3(int& a, int& b) {    // por referencia
    int t = a; 
    a = b; 
    b = t;           
}   

int main() {
    int x = 1;
    int y = 2;

    intercambiar1(x, y);
    std::cout << "Por valor\n" << "x = " << x << "\ny = " << y << std::endl;

    x = 1;
    y = 2;

    intercambiar2(&x, &y);
    std::cout << "Por puntero\n" << "x = " << x << "\ny = " << y << std::endl;

    x = 1;
    y = 2;

    intercambiar3(x, y);
    std::cout << "Por referencia\n" << "x = " << x << "\ny = " << y << std::endl;

    return 0;
}