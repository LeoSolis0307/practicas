#include <iostream>
#include <string.h>
using namespace std;

struct complejo {
	float a,b;
};
complejo operator + (complejo a, complejo b) {
    complejo result;
    result.a = a.a + b.a;
    result.b = a.b + b.b;
    return result;
}
complejo& operator ++ (complejo &a) {
    a.a++;
    a.b++;
    return a;
}
complejo operator ++ (complejo &a, int) {
    complejo temp = a;
    a.a++;
    a.b++;
    return temp;
}
void mostrar(complejo c) {
    cout << "(" << c.a << ", " << c.b << ")";
}
int main() {
    complejo x = {5, -8};
    complejo y = {3, 6};
    complejo z;
    z = x + y;
    cout << "z = (x + y) ";
    mostrar(z);
    cout << endl;
    
    z++;
    cout << "z++ = ";
    mostrar(z);
    cout << endl;
    
    ++z;
    cout << "++z = ";
    mostrar(z);
    cout << endl;
    
    cout << "z = ";
    mostrar(z);
    cout << endl;
    
    return 0;
}