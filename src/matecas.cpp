#include "matecas.h"
#include <iostream>


double absoluto(double x){
    if (x < 0) {
        return x*-1;
    }
     return x;
   

}

double raiz(double x, int n){
    if(x==0) return 0;

    double adivinanza = x/n;
    double nuevo = 0;

    while(true){
        double pot = 1.0;
        
        for(int i=0; i < n-1; i++){
            pot = pot*adivinanza;
        }
        nuevo = ((n-1)* adivinanza + x/pot)/n;
        if(absoluto(nuevo - adivinanza) < 0.0000000001) return nuevo;
        adivinanza = nuevo;
    }
    return adivinanza;
}

double exponencial(double x){
    double num = 1.0;
    double suma = 1.0;

    for(int i = 1; i<=100; i++){
        num = num * x/i;
        suma = suma + num;
    }

    return suma;
}

