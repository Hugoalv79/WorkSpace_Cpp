//                                PROGRAMA QUE SUME DOS NUMEROS CUALQUIERA
//                                         START
#include<iostream>
#include<conio.h>

using std::cin;
using std::cout;
using std::endl;

// PROTOTIPO DE FUNCIÓN
// Le decimos a C++ que esta función existe
template <class TIPOD>
void mostrarAbs(TIPOD numero);
//                                         CÓDIGO
int main()
    //VARAIABLES A USAR
    {int n1 = 4;
    float n2=37.53;
    double n3=192.873;

    //CÓDIGO OUTPUT USUARIO
    mostrarAbs(n1);
    mostrarAbs(n2);
    mostrarAbs(n3);

    // OUTPUT C++
    getch();
    return 0;}


template <typename TIPOD>
void mostrarAbs(TIPOD numero)
    {if(numero<0){numero*=-1;}
    cout<<"El valor del numero es: "<<numero<<endl;}