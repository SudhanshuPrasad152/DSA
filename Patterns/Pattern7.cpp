#include<iostream>
using namespace std;

int main(){
    int i=1,n,j;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<i-j+1<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}