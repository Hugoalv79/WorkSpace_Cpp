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


// Nuevos métodos
void setEpisodio(int &_numEpisodio, Episodio _episodio){
    if(episodios[_numEpisodio - 1] > 0){
        episodios[_numEpisodio] = _episodio;
    }
    else{
        episodios[_numEpisodio] = -1;
        printf("No existe el episodio");
        
    }
}
void Serie::calcularCalificacionPromedio(){
    double acum = 0;

    for (int indice = 0; indice < cantEpisodios ; ++indice){
        acum += episodios[indice].getCalificacion();
    }

    if (cantEpisodios > 0){
        calificacionPromedio = acum / cantEpisodios;

    }

}

void Serie::addEpisodio(Episodio _episodio){
    if (cantEpisodios <= 5 && cantEpisodios > 0){
        episodios[cantEpisodios - 1] = _episodio;

        cantEpisodios++;
    }

    else{
        printf("No se pudo añadir este espisodio");
    }

}

void Serie::delEpisodio(){
    if(cantEpisodios > 0){
        printf("Se ha eliminado el Episodio\n");
        cout << episodios[cantEpisodios - 1].str() + "\n";
        delete episodios[cantEpisodios - 1];
        cantEpisodios--;
    }
    
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

// Métodos de acceso: Nuevos
Episodio Serie::getEpisodio(int &_numEpisodio){
    Episodio epi;
    if(_numEpisodio < 5){
        return episodios[_numEpisodio - 1];
    }
    else{
        return epi;
    }
}

// Otros métodos
string Serie::str(){
    string acum = "";

    for (int indice = 0; indice < cantEpisodios; ++indice){
        acum = acum + 'E' + to_string(indice) + episodios[indice].str() + "\n";
    }

    return id + ',' + titulo + ',' + to_string(duracion) + ',' + genero + ',' + to_string(calificacionPromedio)
        + ',' + to_string(cantEpisodios) + "\n" + acum;
}
