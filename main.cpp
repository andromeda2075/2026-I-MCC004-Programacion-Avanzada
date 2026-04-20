#include <iostream>
#include <math.h>
#include "util.h"
#include "types.h"
using namespace std;

// Ernesto Cuadros
// g++ -std=c++17 main.cpp util.cpp -o main
int main() {
    
  
    T x0 = 5000000, y0 = 289225;

    T a0 = suma(x0, y0);
    cout << x0 << " + "<< y0 << " = " << a0 << endl;

    T a2 = resta(x0, y0);
    cout << x0 << " - "<< y0 << " = " << a2 << endl;

    T a3 = multiplicacion(x0, y0);
    cout << x0 << " * "<< y0 << " = " << a3 << endl;

    T a4 = division(x0, y0);
    cout << x0 << " / "<< y0 << " = " << a4 << endl;


    T x1 = 5, y1 = 6;
    T a5 = potencia(x1, y1);
    cout << x1 << " ^ "<< y1 << " = " << a5 << endl;

    T a6 = raizCuadrada(x1);
    cout << "Raiz Cuadrada " << x1<< " = " << a6 << endl;

    T x2 = -3.14;

    T a7 = valor_absoluto(x2);
    cout << "Valor Absoluto " << x2 << " = " << a7 << endl;

    D a8 = factorial(y1);
    cout << "Factorial " << y1 << " = " << a8 << endl;

    T x3 = 45, y3 = 5;

    T a9 = porcentaje(y3, x3);
    cout << "Porcentaje: " << y3 << " de " << x3 << " = " << a9 << endl;

    I x4 = 10, y4 = 3;
    I a10 = modulo(x4, y4);
    cout << "Modulo " << x4 << " % " << y4 << " = " << a10 << endl;

    return 0;
}
