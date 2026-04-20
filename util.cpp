#include <cmath>
#include <iostream>
#include "util.h"
#include "types.h" 
// Definicion de operaciones 

T suma(T x, T y){
    return x + y;
}


T resta(T x, T y) {
    return x - y;
}


T multiplicacion(T x, T y) {
    return x * y;
}

T division(T x,T y)
{
    return x/y;
}

T potencia(T base, I exponente) {
    T resultado = 1;
    for (I i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

T raizCuadrada(T x){
    if (x < 0) {
        std::cout << "Error: No se puede calcular la raíz cuadrada de un número negativo." << std::endl;
        return -1;
    }
    return sqrt(x);
}


T valor_absoluto(T x) {
    return (x < 0) ? -x : x; 
}


D factorial(I n){
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

T porcentaje(T a , T b){
    if (b == 0) {
        std::cout << "Error: División por cero." << std::endl;
        return -1;
    }
    return (a / b) * 100;
}

I modulo (I a, I b){
    if (b == 0) {
        std::cout << "Error: División por cero." << std::endl;
        return -1;
    }

    I c = (I)a / b;
    I d = c * b;
    I resta = a - d;

    return resta;
}