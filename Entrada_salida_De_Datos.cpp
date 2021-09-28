#include <iostream>

using namespace std;

int main(){
    // Variables
    int n1=0, n2=0, suma=0, resta=0, multiplicacion=0;
    double division=0;

    cout<<"Digita un número: "; cin>>n1;
    cout<<"Digita otro número: "; cin>>n2;

    suma=n1+n2;
    resta=n1-n2;
    multiplicacion=n1*n2;
    division=n1/n2;

    cout<<"\nEl resutlado de la suma es: "<< suma<<endl;
    cout<<"El resutlado de la resta es: "<< resta<<endl;
    cout<<"El resultado de la multiplicación es: "<<multiplicacion<<endl;
    cout<<"El resultado de la division es: "<< division<<endl;

    return 0;
}