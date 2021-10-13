#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{    int saldo_inicial=1000,opc;
    float extra,saldo=0,retiro;

    cout<<"\tBienvenido a su cajero virtual"<<endl;
    cout<<"\tSeleccione lo que desea hacer"<<endl;
    cout<<"1. Ingresar dinero en la cuenta"<<endl;
    cout<<"2. Retirar dinero de la cuenta"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Opcion: "<<endl;cin>>opc;

    switch(opc)
    {case 1: cout<<"Digite la cantidad de dinero a ingresar: ";cin>>extra;
            saldo=saldo_inicial+extra;
            cout<<"Dinero en la cuenta: "<<saldo;break;

    case 2: cout<<"Seleccione cuanto desea retirar: "<<endl;cin>>retiro;
            if(retiro>saldo_inicial)
            {cout<<"No tiene suficente dinero en la cuenta"<<endl;}
            else
            {saldo_inicial-=retiro;}
            cout<<"Dinero en cuenta: "<<saldo_inicial;break;
           
    case 3: break;}
    
    
    return 0;}