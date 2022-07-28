#include<iostream>
using namespace std;

int main(){
    int i=1,j,n;
    cin>>n;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}