#include<iostream>
using namespace std;

int main(){
    int i=1,j,n;
    cin>>n;
    char count='A';
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