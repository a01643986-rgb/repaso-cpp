class Reserva {
public:
    bool asignarPersonas(int p) {
        if (p < 1 || p > 20) return false;
        personas = p; return true;
    }
    bool asignarHorario(int ini, int fin) { 
        if (ini < 0 || fin > 23 || ini >= fin) return false;
        horaInicio = ini; horaFin = fin; return true;
    }
private:
    std::string sala = "A1";
    int personas = 5;
    int horaInicio = 10, horaFin = 22;
};