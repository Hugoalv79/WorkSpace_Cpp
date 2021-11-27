
#include <bits/stdc++.h>

using namespace std;

class Punto{
private:
    double x,y;

public: 
    Punto();
    Punto(double _x, double _y);

    // Métodos de acceso: Retorna el valor de los atributos
    double getX();
    double getY();

    // Métodos constructores: Modifica el valor de los atributos
    void setX();
    void setY();

    // Otros métodos
    double calculaDistancia(Punto p2);
    string str();

};
