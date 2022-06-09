#ifndef Triangulo_hpp
#define Triangulo_hpp

#include <bits/stdc++.h>

using namespace std;


class Triangulo{
private:
    Punto v1,v2,v3;


public:
    Triangulo();
    Triangulo(Punto _v1, Punto _v2, Punto _v3);

    // Método de acceso
    Punto getVertice1();
    Punto getVertice2();
    Punto getVertice3();

    // Métodos modificadores
    void setVertice1(Punto _v1);
    void setVertice2(Punto _v2);
    void setVertice3(Punto _v3);

    // Otros metodos
    double area();
    double perimetro();
    string str();
    
};

#endif
