// a funtion is said to be inline if it has only one line. It will replace the function call with the function body of the function.

#include<bits/stdc++.h>
using namespace std;

inline int getMax(int& a, int& b){
    return (a > b) ? a : b;
}

int main(){
    int a = 1, b = 2;

    int ans = getMax(a, b);
    cout<<ans<<endl;
    a = a + 3;
    b = b + 1;

    ans = getMax(a, b);
    cout<<ans<<endl;
    return 0;
}