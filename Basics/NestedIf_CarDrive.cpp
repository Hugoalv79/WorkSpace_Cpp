#include <iostream>
using namespace std;

void can_you_drive(int age, bool has_car) 
{
    //----WRITE YOUR CODE BELOW THIS LINE----
    if(age>=16)
        {
            if (has_car==true){cout<<"Yes - you can drive!";}
            if (has_car==false){cout<<"Sorry, you need to buy a car before you can drive!";}
        }
    else{int need=16-age;cout<<"Sorry, come back in "<<need<<" years and be sure you own a car when you come back.";}
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
}
