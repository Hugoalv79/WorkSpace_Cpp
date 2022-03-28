#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{    int edad;

    cout<<"Digita la edad: "; cin>>edad;

    if((edad>=18)&&(edad<=25))
    {cout<<"La edad esta en el rango";}

    else
    {cout<<"La edad NO esta en el rango";}
    
    return 0;}
