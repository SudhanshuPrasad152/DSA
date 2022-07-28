#include<bits/stdc++.h>
using namespace std;

bool isPrime(int number){
    for(int i = 2; i < number; i++){
        if(number%i == 0){
            return 0;
        }
    }
    return 1;
}

int countPrime(int n){
    int count = 0;

    for(int i = 2; i < n; i++){
        if(isPrime(i)){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<countPrime(n);
    return 0;
}