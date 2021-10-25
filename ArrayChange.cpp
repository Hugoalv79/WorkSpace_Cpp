#include<vector>
using namespace std;


int arrayChange(vector<int> inputArray) 
{
    int counter = 0;
    
    for(int i=1; i<inputArray.size(); ++i)
    {   int diff = (inputArray.at(i-1)<inputArray.at(i)? 0:inputArray.at(i-1)-inputArray.at(i)+1);
        counter += diff;
        inputArray.at(i) += diff;}

    return counter;
}

int arrayChange(vector<int> a) {
    int ma = -1e6;
    int ans = 0;
    for(int i:a)
    {
        ma = max(ma+1,i);
        ans += ma - i;
    }
    return ans;
}

