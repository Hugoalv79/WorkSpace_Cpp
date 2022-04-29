#include<string>
using namespace std;

int A[256];

bool palindromeRearranging(string inputString) {
    for(char i:inputString)
        ++A[i];
    int c = 0;
    for(int i = 0; i < 256; ++i)
        c += A[i]&1;
    return c<2;
}
