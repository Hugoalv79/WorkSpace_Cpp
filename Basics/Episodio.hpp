/* Hugo Tonatiuh Alvarado Garcia
   A00834109
   Actualización 05-12-2021
*/

#ifndef Episodio_hpp
#define Episodio_hpp

#include <bits/stdc++.h>
#include <string.h>

using namespace std;

class Episodio{
private:
    string titulo;
    int temporada;
    double calificacion;

public:
    //Métodos constructores - Cambiar el valor del atributo desde la app
    Episodio();
    Episodio(string _titulo, int _temporada, double _calificacion);
    ~Episodio();

    void setTitulo(string _titulo);
    void setTemporada(int _temporada);
    void setCalificacion(double _calificacionPromedio);

    // Métodos de acceso - OBTENER EL VALOR DE UN ATRIBUTO DESDE LA APP
   
    string getTitulo();
    int getTemporada();
    double getCalificacion();

    // Otros
    string str();
    
};

#endif
