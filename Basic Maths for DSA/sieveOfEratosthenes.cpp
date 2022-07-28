#include<bits/stdc++.h>
using namespace std;

int N = 1000000;
bool sieve[1000001];

void createSieve(){
    for(int i = 2; i <= N; i++){
        sieve[i] = true; 
    }

    for(int i = 2; i*i <= N; i++){
        if(sieve[i] == true){
            for(int j = i*i; j <= N; j += i){
                sieve[j] = false;
            }
        }   
    }
}

int main(){
    createSieve();
    cout<<"Enter a number"<<endl;
    int n;
    cin>>n;

    if(sieve[n] == true)
       cout<<"Yes it's a prime number"<<endl;
    else
        cout<<"No it's not a prime number"<<endl;
    return 0;
}