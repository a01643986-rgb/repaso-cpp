Sesion global("global");  // constructores y destructor imprimen
int main() {
    Sesion a("a");
    { Sesion b("b"); Sesion c("c", 2); }
    std::cout << "--- medio ---\n";
    Sesion d;
}

// 1-. Sesion(global)
// 2-. Sesion(a)
// 3-. Sesion(b)
// 4-. Sesion(c, 2)
// 5-. Cierra ~Sesion (c, 2) porque se cerró la llave
// 5-. Cierra ~Sesion (b) por lo mismo
// 6-. --- medio ---
// 7-. Sesion()
// 8-. Cierra ~Sesion() porque termina main
// 9-. Cierra ~Sesion(a)
// 10-. Cierra ~Sesion(global)