#include<iostream>
using namespace std;

void EvenOdd(){
    int a;
    cin>>a;
    if(a%2==0){
        cout<<"Even Number "<<endl;
    }
    else
    cout<<"Odd Number"<<endl;
}

int main(){
    EvenOdd();
    EvenOdd();
    EvenOdd();
    return 0;
}