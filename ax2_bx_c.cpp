#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

int main(){
    double a,b,c,operacion1,operacion2;
    cout<<"Ingresa el valor de a: "; cin>>a;
    cout<<"\nIngresa el valor de b: "; cin>>b;
    cout<<"\nIngresa el valor de c: "; cin>>c;
    operacion1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    operacion2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);


    cout<<"El resultado de la primera operacion es: "<<operacion1<<endl;
    cout<<"El resultado de la segunda operacion es: "<<operacion2<<endl;
    return 0;
}