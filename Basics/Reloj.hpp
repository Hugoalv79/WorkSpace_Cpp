#include <bits/stdc++.h>

using namespace std;

#ifndef Reloj_hpp
#define Reloj_hpp
// // Alumno: Hugo Tonatiuh Alvarado Garcia - A00834109
class Reloj
{
    private:
        int hora = 0, minutos = 0;

    public:   
        // Métodos Modificadores:
        void setHora(int);
        //     método que recibe un valor entero y se lo asigna al atributo hora. 
        // Este método no regresa ningún valor. – debe validar el valor: 0..23 
        void setMinutos(int);
        // método que recibe un valor entero y se lo asigna al atributo minu. 
        // Este método no regresa ningún valor - . – debe validar el valor: 0..59

        // Métodos de Acceso:
        int getHora( );
        // que no recibe parámetros y regresa como valor de retorno el valor del atributo hora. 
        int getMinutos( );
        // Que no recibe parámetros y regresa como valor de retorno el valor del atributo minu.

        // Otros métodos:
        void muestra( );
        // método que despliega en la pantalla la hora en el
        // formato usual (la hora, luego un caracter “:” y luego los minutos); la
        // hora y los minutos deben desplegarse con 2 dígitos.
        void incrementaMinutos( );
        // método que incrementa el atributo minutos en 1, en caso de ser 60 debe cambiar a 0 e incrementar
};
#endif


