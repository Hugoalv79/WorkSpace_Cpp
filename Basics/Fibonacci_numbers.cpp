#include<stdio.h>
#include <ctime> 
#include<iostream>
#include<vector>
using namespace std;
// MEMOIZACIÓn
// int fibonacci(int n,vector<int>memo)
// {   if(memo[n]!=NULL){memo[n]=n;return n;}
    
//     else if(n<=1){return n;}

//     else{int result=fibonacci(n-1)+fibonacci(n-2);memo[n]=result;return result;}
//     return 0;
// v}

// vector<int>memo{0,1};
int LinearFibonacci(int n)
{   vector<int>SuperMemo={0,1};

    for(int actual=2;n;++actual)
        {SuperMemo[actual]= SuperMemo[actual-1]+SuperMemo[actual-2];}




    return SuperMemo[n];
}

int main()
{   //int n;
//     printf("Digita el numero de fibonacci a calcular: ");scanf("%d",n);
    unsigned t0, t1;
    t0=clock();
    
    
    cout<<"\nEl numero correspondiente es: "<<LinearFibonacci(50)<<endl;

    t1 = clock();
    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    printf("Execution time: %f",time);
    return 0;
}

// Excelente, este un ejemplo de entrevista, si solo usas recursividad para fibonacci tendrás  una complejidad de
//  tiempo y espacio de O(2^n), si usas memoization puedes bajar el tiempo de complejidad a O(n) pero el espacio 
//  también es  O(n), la mejor forma para este caso es la iterativa ya sea usando una variable temporal para 
//  manejar el estado previo o un array como lo muestra en 

