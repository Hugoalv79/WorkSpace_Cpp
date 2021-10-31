#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    float x,y,z,result;
    cout<<"Ingresa el valor de la primer nota: "; cin>>x;
    cout<<"\nIngresa el valor de la segunda nota: "; cin>>y;
    cout<<"\nIngresa el valor de la tercera nota: "; cin>>z;
    result = (x+y+z)/3;
    cout<<"El promedio de las notas es: "<<result<<endl;
    return 0;
}