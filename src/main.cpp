#include "matecas.h"
#include <iostream>

int main (){

    std::cout << "absoluto(-4) = " << absoluto(-4) << "\n";
    std::cout << "absoluto(4.5) = " << absoluto(4.5) << "\n";

    std::cout << "raiz(100, 2) = " << raiz(100, 2) << "\n";
    std::cout << "raiz(27, 3) = " << raiz(27, 3) << "\n";

    std::cout << "exponencial(0) = " << exponencial(0) << "\n";
    std::cout << "exponencial(1) = " << exponencial(1) << "\n";
    std::cout << "exponencial(2) = " << exponencial(2) << "\n";

    std::cout << "normalizar(10) = " << normalizar(10) << "\n";
    std::cout << "normalizar(-10) = " << normalizar(-10) << "\n";

    std::cout << "seno(0) = " << seno(0) << "\n";
    std::cout << "seno(PI/2) = " << seno(PI / 2) << "\n";
    std::cout << "seno(PI) = " << seno(PI) << "\n";
    std::cout << "seno(PI/6) = " << seno(PI / 6) << "\n";

    std::cout << "coseno(0) = " << coseno(0) << "\n";
    std::cout << "coseno(PI/3) = " << coseno(PI / 3) << "\n";
    std::cout << "coseno(PI/2) = " << coseno(PI / 2) << "\n";
    std::cout << "coseno(PI) = " << coseno(PI) << "\n";

    return 0;
}