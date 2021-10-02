#include <iostream>
using namespace std;

using std::cin;
using std::cout;
using std::endl;

int main()
{    float n1,n2,n3;
    cout<<"Digita los valores de los 3 numeros: "; cin>>n1>>n2>>n3;

    if (n1>n2 and n1>n3)
    {cout<<"El numero mayor es: "<<n1;}

    else if (n2>n1 and n2>n3)
    {cout<<"EL número mayor es: "<<n2;}

    else if (n3>n1 and n3>n2)
    {cout<<"El número mayo es: "<<n3;}
    else
    {cout<<"Hay números repetidos";}

    return 0;}