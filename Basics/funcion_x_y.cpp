#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

int main(){
    double x,y,operacion;
    cout<<"Ingresa el valor de x: "; cin>>x;
    cout<<"\nIngresa el valor de y: "; cin>>y;
    operacion = sqrt(x)/(pow(y,2)-1);
    cout<<"El resultado de la operacion es: "<<operacion<<endl;
    return 0;
}
