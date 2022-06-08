#include <iostream>
#include<vector>
#include<conio.h>
using namespace std;


template <class py>
void mostrarAbs(py xtypes);

int adjacentElementsProduct(std::vector<int> inputArray) 
{   int ans = -987654321;
    double quit= 300.28;

    for(int i = 1; i<inputArray.size();++i)
        {ans = max(ans, inputArray[i] * inputArray[i - 1]);}

    return ans;}

int main()
{   cout<<"Las naranjas saben buenas"<<endl;
    


    

    return 0;}
