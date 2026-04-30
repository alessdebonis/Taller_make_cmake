#ifndef MATECAS_H // si este archivo no ha sido incluido antes
#define MATECAS_H // lo marco como incluido para no repetirlo

const double PI = 3.14159265358979323846; // defino la constante PI

double absoluto(double x); // declaro la funcion valor absoluto
double raiz(double x, int n); // declaro la funcion raiz n-esima
double exponencial(double x); // declaro la funcion e elevado a x
double normalizar(double x); // declaro la funcion que ajusta angulos
double seno(double x); // declaro la funcion seno
double coseno(double x); // declaro la funcion coseno

#endif // fin de la proteccion contra doble inclusion