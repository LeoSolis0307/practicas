#include<iostream>
#include<cstring>
using namespace std;
class empresa{
    private:
    char nombre[64];
    long id;
    float salario;
public:
    empresa(char *nombre, long id, float salario);
    void ver_datos(void);
};
empresa::empresa(char *n, long i, float s){
    strcpy(nombre, n);
    id = i;
    salario = s;
}
void empresa::ver_datos(void){
    cout<<"empleados:  "<<nombre<<endl;
    cout<<"id:  "<<id<<endl;
    cout<<"salario:  "<<salario<<endl;
}
int main(void){
    empresa empleado1("leo", 312315646, 6511156);
    empleado1.ver_datos();
    return 0;
}


