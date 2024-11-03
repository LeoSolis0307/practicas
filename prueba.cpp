#include <iostream>
#include <cstring>
using namespace std;

class escuela{
    char alumno[64];
    int id;
public:
    escuela(char *a, int i);
    void mostrar();
};

escuela::escuela(char *a, int i){
    strcpy(alumno, a);
    id = i;
}
void escuela::mostrar(){
    cout << "El alumno es: " << alumno << endl;
    cout << "El id del alumno es: " << id << endl;
}
int main(){
    escuela alumno1("solis aguilar", 5615);
    alumno1.mostrar();
    return 0;
}