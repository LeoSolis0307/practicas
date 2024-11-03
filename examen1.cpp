#include <iostream>
#include <cstring>

using namespace std;

class mi_clase {
private:
    int id;
    char nombre[64];
public:
    mi_clase(int id, const char* nombre);
    void mostrar();
};

mi_clase::mi_clase(int id_param, const char* nombre_param) {
    id = id_param;
    strncpy(nombre, nombre_param, sizeof(nombre) - 1);
    nombre[sizeof(nombre) - 1] = '\0';
}

void mi_clase::mostrar() {
    cout << "El id del alumno es: " << id << endl;
    cout << "El nombre del alumno es: " << nombre << endl;
}

int main() {
    mi_clase objeto(5615, "solis aguilar");
    objeto.mostrar();
    return 0;
}