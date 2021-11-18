#include "Serie.hpp"
#include <bits/stdc++.h>
using namespace std;

Serie::Serie(){
    id = "000";
    titulo = "Programacion orientada a objetos";
    duracion = 1000;
    genero = "Programacion Avanzada";
    calificacionPromedio = 100;
    cantEpisodios = 9;
}
    
Serie::Serie(string _id, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _cantEpisodios){
    id = _id;
    titulo = _titulo;
    duracion = _duracion;
    genero = _genero;
    calificacionPromedio = _calificacionPromedio;
    cantEpisodios = _cantEpisodios;
}

// Métodos modificadores - Cambiar el valor del atributo
void Serie::setId(string _id){
    id = _id;
}
void Serie::setTitulo(string _titulo){
    titulo = _titulo;
}
void Serie::setDuracion(int _duracion){
    duracion = _duracion;
}
void Serie::setGenero(string _genero){
    genero = _genero;
}
void Serie::setCalificacion(double _calificacionPromedio){
    calificacionPromedio = _calificacionPromedio;
}
void Serie::setCantidadEpisodios(int _cantEpisodios){
    cantEpisodios = _cantEpisodios;
}

// Métodos de acceso - OBTENER EL VALOR DE UN ATRIBUTO DESDE LA APP
string Serie::getId(){
    return id;
}
string Serie::getTitulo(){
    return titulo;
}
int Serie::getDuracion(){
    return duracion;
}
string Serie::getGenero(){
    return genero;
}
double Serie::getCalificacion(){
    return calificacionPromedio;
}
int Serie::getCantidadEpisodios(){
    return cantEpisodios;
}

// Otros métodos
string Serie::str(){
    return id + ',' + titulo;
}
