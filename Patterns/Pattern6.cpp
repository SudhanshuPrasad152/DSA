#include<iostream>
using namespace std;

int main(){
    int i=1,n,j;
    cin>>n;
    int row;
    while(i<=n){
        j=1;
        row=i;
        while(j<=i){
            cout<<row<<" ";
            row++;
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}