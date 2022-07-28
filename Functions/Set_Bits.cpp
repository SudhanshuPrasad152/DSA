#include<iostream>
using namespace std;

int SetBits(int a, int b){
    int count1=0 , count2=0; 
    while(a!=0){
        if(a&1){
            count1++;
        }
        a=a>>1;
    }
    while(b!=0){
        if(b&1){
            count2++;
        }
        b=b>>1;
    }
    return count1 + count2;
}

int main(){
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    int ans = SetBits(a,b);
    cout<<"Number of SetBits are: "<<ans<<endl;
    return 0;
}