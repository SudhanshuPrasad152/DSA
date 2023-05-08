#include<bits/stdc++.h>
using namespace std;

void simpleFunc(int &i){
    // if(i == 10){
    //     return;
    // }
    cout<<i;
    i++;
    simpleFunc(i);
}

int main(){
    int i = 0;
    simpleFunc(i);
    cout<<i;
    return 0;
}