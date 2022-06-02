#include <iostream>
using namespace std;

using std::cin;
using std::cout;
using std::endl;

int main(){
    int numero;
    cout<<"Digita un numero entre 1-5: "; cin>>numero;

    switch (numero)
    {
    case 1: cout<<"El numero es 1: ";break;
    case 2: cout<<"Es el numero 2: ";break;
    case 3: cout<<"Es el numero P3: ";break;
    case 4: cout<<"Es el numero 4: ";break;
    case 5: cout<<"Es el numero 5: ";break;
    default:
        cout<<"No esta en el rango de 1-5";
        break;}
        
    return 0;
}
