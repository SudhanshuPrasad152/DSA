/*Recursion can be defined as a function calling itself directly or indirectly.
To make a function recursive to two condition must be present that is it's base condition and recursive relation and base condition must have a return statement.*/

#include<bits/stdc++.h>
using namespace std;

int factorial(int n){

    // base condition
    if(n == 0){
        return 1;
    }
    // Recursive Relation
    return n * factorial(n - 1);
}

int main(){
    int n;
    cin>>n;

    int ans = factorial(n);

    cout<<ans<<endl;
    return 0;
}