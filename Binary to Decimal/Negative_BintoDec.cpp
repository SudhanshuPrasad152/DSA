#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n; 
    int i=0;
    int ans=0;
    if(n<0){
        n=-1*n;
    }
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * powf(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << "Binary Equivalent"<<(~ans + 1);
    return 0;
}