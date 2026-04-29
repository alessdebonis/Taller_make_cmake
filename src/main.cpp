#include "matecas.h"
#include <iostream>

int main (){
    std::cout<<"Absoluto de 4.5 es: "<<absoluto(4.5)<<"\n";
    std::cout<<"Absoluto de -4 es: "<<absoluto(-4)<<"\n";

    
    std::cout<<"Raiz de 100 es: "<<raiz(100,2)<<"\n";
    std::cout<<"Raiz de 27 es: "<<raiz(27,3)<<"\n";

    
    std::cout<<"Exponencial de 1 es: "<<exponencial(1)<<"\n";
    std::cout<<"Exponencial de 0 es: "<<exponencial(0)<<"\n";

  
    std::cout<<"Normalizar de 4.5 es: "<<normalizar(10)<<"\n";
    std::cout<<"Normalizar de -4 es: "<<normalizar(-10)<<"\n";
    /*
    std::cout<<"Seno de 4.5 es: "<<seno(4.5)<<"\n";
    std::cout<<"Seno de -4 es: "<<seno(-4)<<"\n";

    std::cout<<"Coseno de 4.5 es: "<<coseno(4.5)<<"\n";
    std::cout<<"Coseno de -4 es: "<<coseno(-4)<<"\n";
    */


    return 0;
}