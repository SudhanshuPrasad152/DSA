#include<iostream>
using namespace std;

int fact(int a){
    int fact=1;
    for(int i=a; i>0; i--){
        fact  = fact * i;
    }
    return fact;
}

int main(){
    int nCr, n, r;
    cin>>n>>r;
    int d=(n-r);
    nCr = fact(n)/(fact(d)*fact(r));
    cout<<"nCr = "<<nCr<<endl;
    return 0;
}