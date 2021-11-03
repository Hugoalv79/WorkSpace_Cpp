
//     1°- operaNumeros.  

// El programa debe leer  dos  números  por  teclado  y  permita elegir  entre

//   3  opciones  del siguiente  menú: 

//     <S> Mostrar una suma de los dos números 
//     <R> Mostrar una resta de los dos números (el primero menos el segundo) 
//     <M> Mostrar una multiplicación de los dos números 
//     En  caso  de  no  introducir  una  opción  válida,  

// el  programa  informará  con  un  letrero  que  no  es  

// correcta 
#include<bits/stdc++.h>

using namespace std;

int main()
{   // VARIABLES
    int x,y; 
    char opcion;
    // MENÚ
    cout<<"MENU\n" 
    <<"1- <S> Suma\n"
    <<"2- <R> Resta\n"
    <<"3- <M> Multiplicacion\n";

    cout<<"Ingresa los numeros a procesar: ";cin>>x>>y;
    cout<<"\nIngresa la opcion que deseas: " ;cin>>opcion; opcion=tolower(opcion);printf("\n");
    // EJECUCION
    switch(opcion)
    {
        case 's': cout<<"La respuesta es: "<<x+y;break;
        case 'r':cout<<"La respuesta es: "<<x-y;break;
        case 'm':cout<<"La respuesta es: "<<x*y;break;
        default: cout<<"Opcion no valida";break;
    }

    return 0;
}

// Hugo Tonatiuh Alvarado Garcia - A00834109