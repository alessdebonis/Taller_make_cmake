#include "matecas.h" // incluyo el archivo con las declaraciones
#include <iostream> // para poder imprimir en consola


// funcion que devuelve el valor absoluto de un numero
double absoluto(double x){
    if (x < 0) { // si es negativo
        return x*-1; // lo vuelvo positivo
    }
     return x; // si ya es positivo lo dejo igual
}

// funcion que calcula la raiz n-esima usando el metodo de Newton
double raiz(double x, int n){
    if(x==0) return 0; // la raiz de 0 es 0

    double adivinanza = x/n; // mi primera estimacion
    double nuevo = 0; // aqui guardo la estimacion mejorada

    while(true){ // repito hasta encontrar la respuesta
        double pot = 1.0; // para calcular adivinanza elevada a n-1
        
        for(int i=0; i < n-1; i++){ // multiplico varias veces
            pot = pot*adivinanza;
        }
        // aplico la formula de Newton para mejorar la estimacion
        nuevo = ((n-1)* adivinanza + x/pot)/n;
        // si la diferencia es muy pequeña ya encontre la respuesta
        if(absoluto(nuevo - adivinanza) < 0.0000000001) return nuevo;
        adivinanza = nuevo; // si no, sigo intentando con la nueva estimacion
    }
    return adivinanza;
}

// funcion que calcula e elevado a x usando serie de Taylor
double exponencial(double x){
    double num = 1.0; // primer pedazo de la suma
    double suma = 1.0; // empiezo la suma con el primer pedazo

    for(int i = 1; i<=100; i++){ // sumo 100 pedazos
        num = num * x/i; // cada pedazo sale del anterior multiplicado por x/i
        suma = suma + num; // lo agrego a la suma
    }

    return suma; // devuelvo el resultado
}

// funcion que ajusta el angulo para que quede entre -PI y PI
double normalizar(double x){
    while(x > PI) // si es mayor a PI
        x = x - 2 * PI; // le resto una vuelta
    while(x < -PI) // si es menor a -PI
        x = x + 2 * PI; // le sumo una vuelta
    return x;
}

// funcion que calcula el coseno usando serie de Taylor
double coseno(double x){
    x = normalizar(x); // primero ajusto el angulo
    double num = 1.0; // el primer pedazo es 1
    double suma = 1.0; // la suma empieza en 1

    for(int i = 1; i <= 50; i++){ // sumo 50 pedazos
        // cada pedazo sale del anterior, el signo se alterna por el -x*x
        num = num * -x * x / ((2 * i - 1) * (2 * i));
        suma = suma + num; // lo agrego a la suma
    }
    return suma;
}

// funcion que calcula el seno usando serie de Taylor
double seno(double x){
    x = normalizar(x); // primero ajusto el angulo
    double num = x; // el primer pedazo es x
    double suma = x; // la suma empieza en x

    for(int i = 1; i <= 50; i++){ // sumo 50 pedazos
        // cada pedazo sale del anterior, el signo se alterna por el -x*x
        num = num * -x * x / ((2 * i) * (2 * i + 1));
        suma = suma + num; // lo agrego a la suma
    }
    return suma;
}