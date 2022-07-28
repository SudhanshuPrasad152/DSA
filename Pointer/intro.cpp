#include<bits/stdc++.h>
using namespace std;

int main(){
    int num = 5;
    
    cout<<num<<endl;

    cout<<"address of num is "<<&num<<endl;

    int *ptr = &num;
    cout<<"Value is "<<*ptr<<endl;
    cout<<"address is "<<ptr<<endl;

    char ch = 's';
    char *p = &ch;
    cout<<"Value is "<<*p<<endl;
    cout<<"address is "<<p<<endl;

    cout<<"before "<<num<<endl;
    (*ptr)++;
    cout<<"after "<<num<<endl;

    // copying a pointer
    int *q = ptr;
    cout<<*q<<" - "<<*ptr<<endl;
    cout<<q<<" - "<<ptr<<endl;

    int i = 7;
    int *t = &i;
    cout<<*t<<endl;
    cout<<"before t"<<t<<endl;
    t = t + 1;
    cout<<"after t"<<t<<endl;
    cout<<*t<<endl;

    float f = 10.5;
    float s = 2.5;
    float* l = &f;
    (*l)++;
    *l = s;
    cout << *l << " " << f << " " << s;
    return 0;
}