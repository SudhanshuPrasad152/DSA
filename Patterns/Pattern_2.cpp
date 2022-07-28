#include<iostream>
using namespace std;

int main(){
    int i=1,j;
    int n;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<n-j+1<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}