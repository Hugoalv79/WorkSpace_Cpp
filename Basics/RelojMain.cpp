#include <bits/stdc++.h>
#include "Reloj.hpp" 

using namespace std;
// Alumno: Hugo Tonatiuh Alvarado Garcia - A00834109
int main()
{   
    Reloj evento;
    int opcion=0, temp=0, hr=0,min=0;
    do{
        cout<<"MENU\n"
        <<"Seleccione una opcion\n"
        <<"1. Cambiar el valor de la hora\n"
        <<"2. Cambiar el valor de los minutos\n"
        <<"3. Mostrar la hora\n"
        <<"4. Mostrar los minutos\n"
        <<"5. Mostrar la hora y minutos\n"
        <<"6. Incrementar minutos\n"
        <<"7. Salir\n";
    scanf("%d",&opcion);

    switch(opcion)
    {   
        case 1: printf("Introduce el nuevo valor de la hora:\n"); 
                scanf("%d", &temp); 
                evento.setHora(temp); 
                break;
        case 2: printf("Introduce el nuevo valor de los minutos:\n"); 
                scanf("%d", &temp);
                evento.setMinutos(temp); 
                break;
        case 3: evento.getHora(); 
                break;
        case 4: evento.getMinutos(); 
                break;
        case 5: evento.muestra();
                break;
        case 6: evento.incrementaMinutos();
                break;
        case 7: break;
        default: printf("No se reconoce la opcion"); 
                 break;

    }}while(opcion!=7);
    return 0;
}
