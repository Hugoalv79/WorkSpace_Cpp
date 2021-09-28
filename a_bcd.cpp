#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    double a=0,b=0,c=0,d=0;
    
    cout<<"Asigna el valor de a: "; cin>>a;
    cout<<"Asigna el valor de b: "; cin>>b;
    cout<<"Asigna el valor de c: "; cin>>c;
    cout<<"Asigna el valor de d: "; cin>>d;

    cout<<"\nEl resultado es: "<<a+(b/(c-d))<<endl;

}