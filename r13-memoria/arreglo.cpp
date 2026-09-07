#include <iostream>

	class Arreglo {
    int* datos;   int n;
public:
    Arreglo(int tam) : datos(new int[tam]), n(tam) {}
    ~Arreglo() { delete[] datos; }

    Arreglo(const Arreglo& otro) : datos(new int[otro.n]), n(otro.n) {
    for (int i = 0; i < n; ++i) datos[i] = otro.datos[i];
}
    Arreglo& operator=(const Arreglo& otro) {
    if (this == &otro) return *this;
    delete[] datos;   n = otro.n;   datos = new int[n];
    for (int i = 0; i < n; ++i) datos[i] = otro.datos[i];
    return *this;
}
    void set(int i, int v) { datos[i] = v; }
    int get(int i) const { return datos[i]; }
    int tam() const { return n; }
};

int main() {
    Arreglo a(3);
    a.set(0, 10);

    Arreglo b = a;
    b.set(0, 99);

    std::cout << a.get(0) << std::endl;
    std::cout << b.get(0) << std::endl;
    
    return 0;
}