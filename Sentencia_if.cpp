#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    double numero,dato=5;

    cout<<"Digita un numero: "; cin>>numero;

    if(numero==dato){cout<<"El numero es 5: "<<endl;}

    else{cout<<"El numero es diferente de 5: "<<endl;}
    
    return 0;
}

// int second(){
//     double numero,dato=5;
//     cout<<"Digita un numero: "; cin>>numero;
//     if(numero!=dato){
//         cout<<"El numero es diferente de 5: "<<endl;
//     }
//     else{
//         cout<<"El numero es 5: "<<endl;
//     }
//     return 0;
// }