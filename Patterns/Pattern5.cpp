#include<iostream>
using namespace std;

int main(){
    int i=1,n,j;
    cin>>n;
    int count=1;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<count<<" ";
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}