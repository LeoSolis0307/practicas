#include <iostream>
#include <string>

using namespace std;

class escuela {
     
     private : 
     string nombre, nacionalidad, hora;
     public :
     escuela (string, string, string);
     ~escuela ();
     void ver_datos ();
     void estudiar();	
};

escuela::escuela (string _nom, string _nacion, string _hora) {
    nombre = _nom;
    nacionalidad = _nacion;
    hora = _hora;
}

escuela::~escuela() {
    cout << "\nDestruyendo..." << endl;
}

void escuela::ver_datos() {
    cout << "\nEl nombre del estudiante es: " << nombre << endl;
    cout << "\nLa nacionalidad del estudiante es: " << nacionalidad << endl;
}

void escuela::estudiar() {
    cout << "\nEl estudiante va a estudiar a las: " << hora << endl;
}

int main() {
    escuela estudiante("Juan", "Mexicano", "12:00");
    
    estudiante.ver_datos();
    estudiante.estudiar();
    
    return 0;
}