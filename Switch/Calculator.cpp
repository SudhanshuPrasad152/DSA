#include<iostream>
using namespace std;

int main(){
    float a,b;
    char operation;
    cin>>a>>b>>operation;
    switch( operation ){
        case '*': cout<<"a*b = "<<a*b<<endl;
        break;
        case '-': cout<<"a-b = "<<a-b<<endl;
        break;
        case '+': cout<<"a+b = "<<a+b<<endl;
        break;
        case '/': cout<<"a/b = "<<float(a/b)<<endl;
        break;
        default: cout<<"Not a valid operation"<<endl;
    }
    return 0;
}