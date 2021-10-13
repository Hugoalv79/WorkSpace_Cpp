#include<stdio.h>
#include<string>
using namespace std;

// PRINTF
// %f = Double or Floating point numbers
// %s = Strings
// %d = Int numbers
// %c = Char

int main()
{   int a {0};
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("The value stored in a is:%d", &a);
    
    
    int var=5;
    float var1,var2,var3;

    printf("Este mensaje se imprime: \n");
    printf("%d \n",var);

    scanf("%f", &var1);
    scanf("%f %f", &var2,&var3);

    printf("%d %f %f %f \n",var,var1,var2,var3);

    


    //////////////////////////////////////////////////////////////////////////////////////////////////////

    string make="Ford";
    string model="Mustang";
    int year=2021;
    double price=9999.000;
    char for_sale='Y';

    printf("Your car is made by: %s \n","Ford");
    printf("Your car is made by: %s | Hola como estas \n",make.c_str());
    printf("Your car is a: %s %s | El ampersant indica que alli debe de ir una variable, todo el texto que quieras escribir va dentro de las comillas\n",make.c_str(),model.c_str());

    printf("The year is: %d\n",year);
    printf("The price is: %f\n",price);
    printf("Is it for sale: %c\n",for_sale);

    printf("The price is: %.2f\n",price); //Double number limited to two decimals
    printf("The price is: $%.2f\n",price); //Double number limited to two decimals with dollar sign

    printf("This precedes with blank spaces: %10s\n", make.c_str()); // This displays a string with initial 
    // spaces, in "%Ns" N include the lenght of the string

    printf("This precedes with zeros: %010s\n", make.c_str()); // This preceds with 10 zeros

    printf("Left justify: %-10s\n", make.c_str()); // Justify

    printf("Double Left justify: %-10s%-10s\n", make.c_str()); // Justify
    
    

    return 0;
}