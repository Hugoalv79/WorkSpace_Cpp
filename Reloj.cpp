#include <bits/stdc++.h>

using namespace std;

#include "Reloj.hpp"
// Alumno: Hugo Tonatiuh Alvarado Garcia - A00834109
// Métodos modificadores
void Reloj::setHora(int _hora){
    hora = _hora;
}

void Reloj::setMinutos(int _minutos){
    minutos = _minutos;
}

// Métodos 
int Reloj::getHora(){
    printf("El valor de la hora es: %d\n",hora);
    return hora;
}

int Reloj::getMinutos(){
    printf("El valor de los minutos es: %d\n",minutos);
    return minutos;
}

// Otros metodos
void Reloj::muestra( ){
    if(hora<10)
        {cout<<'0'<<hora<<':';}
    else
        {cout<<hora<<':';}
    if(minutos<10)
        {cout<<'0'<<minutos;}
    else
        {cout<<minutos;}
    printf("\n");
}

void Reloj::incrementaMinutos( ){
    if(minutos<60)
        {minutos+=1;}
    else
        {minutos=0;
        hora+=1;}
}