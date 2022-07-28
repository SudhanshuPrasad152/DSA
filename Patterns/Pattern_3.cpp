#include<iostream>
using namespace std;

int main(){
    int i=1,j;
    int n, count=1;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<count<<" ";
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}