#ifndef Serie_hpp
#define Serie_hpp

#include <bits/stdc++.h>
using namespace std;

class Serie{
private:
    string id;
    string titulo;
    int duracion;
    string genero;
    double calificacionPromedio;
    int cantEpisodios;
    Episodio episodios[5];

public:
    //Métodos constructores - Cambiar el valor del atributo desde la app
    Serie();
    Serie(string _id, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _cantEpisodios);

    void setId(string _id);
    void setTitulo(string _titulo);
    void setDuracion(int _duracion);
    void setGenero(string _genero);
    void setCalificacion(double _calificacionPromedio);
    void setCantidadEpisodios(int _cantEpisodios);

    // Nuevos métodos
    void setEpisodio(int _Episodio);
    void addEpisodio(Episodio _Episodio);
    void delEpisodio();


    // Métodos de acceso - OBTENER EL VALOR DE UN ATRIBUTO DESDE LA APP
    string getId();
    string getTitulo();
    int getDuracion();
    string getGenero();
    double getCalificacion();
    int getCantidadEpisodios();

    // Métodos de acceso: Nuevos
    int getEpisodio(int &_numEpisodio);
    

    // Otros métodos
    string str();

    // Nuevos Otros métodos
    void calcularCalificacionPromedio();

};

#endif
