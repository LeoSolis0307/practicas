#include <iostream>
using namespace std;

class mi_clase {
    int a; // Variable miembro
public:
    mi_clase();             // Constructor por defecto
    mi_clase(int _a);       // Constructor con parámetro
    void mostrar();         // Función para mostrar el valor de 'a'
    ~mi_clase();            // Destructor
};

// Implementación del constructor por defecto
mi_clase::mi_clase() {
    a = 0;
}

// Implementación del constructor con parámetro
mi_clase::mi_clase(int _a) {
    a = _a;
}

// Implementación del destructor
mi_clase::~mi_clase() {
    cout << "Destruyendo..." << endl;
}

// Implementación de la función mostrar
void mi_clase::mostrar() {
    cout << "Tu número es: " << a << endl;
}

int main() {
    mi_clase numero(115);   // Creación de un objeto pasando el valor 115
    numero.mostrar();       // Llamada a la función mostrar
    return 0;
}