// macros can be defined as a piece of code in programming that is replaced by a macro value before compile time

#include<bits/stdc++.h>
using namespace std;

// creating a macros
#define PI 3.14
int main(){
    int r = 5;

    double area = PI * r * r;
    cout<<"Area is "<<area<<endl;
    return 0;
}