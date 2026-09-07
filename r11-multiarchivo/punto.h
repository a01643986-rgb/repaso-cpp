#pragma once

class Punto {
private:
    int x;
    int y;
public:
    Punto();
    Punto(int x, int y);
    ~Punto();
    void imprimir() const;
};