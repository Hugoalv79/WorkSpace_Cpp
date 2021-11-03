// El programa debe leer n,  cantidad de números se quiere teclear, 
// luego lea todos los números y calcule y despliegue el promedio de los mismos. 

#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int main() 
{   
    int x,temp; printf("Ingrese los numeros a teclear: "); scanf("%d",&x);
    vector<int>sum;

    for(int i=0;i<x;++i)
        {cin>>temp; sum.pb(temp);}

    temp = accumulate(sum.begin(),sum.end(),0);
    printf("Suma total: %d",temp);
    

   return 0; 
}
// Hugo Tonatiuh Alvarado Garcia - A00834109