#include<iostream>
using namespace std;

int nthTerm(int n){
    int nTH;
    nTH=3*n + 7;
    return nTH;
}

int main(){
    int n;
    cout<<"Enter nth term: ";
    cin>>n;
    cout<<nthTerm(n);
    return 0;
}