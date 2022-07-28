#include<bits/stdc++.h>
using namespace std;

int main(){
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    /*cout<<"printing p"<<p<<endl;
    cout<<"address of p"<<&p<<endl;
    cout<<"value pointed by p2"<<*p2<<endl;*/

    // printing i
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    // printing p
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    // printing p2
    cout<<&p<<endl;
    cout<<p2<<endl;
    return 0;
}