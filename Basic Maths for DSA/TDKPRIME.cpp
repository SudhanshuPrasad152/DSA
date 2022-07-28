#include<bits/stdc++.h>
using namespace std;

long long int N = 86028121;
bool sieve[86028122];
vector<int> arr;

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

    for(int i = 2; i <= N; i++){
        if(sieve[i] == true){
            arr.push_back(i);
        }
    }
}

int main(){
    createSieve();
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        cout<<arr[k - 1]<<endl;
    }
    return 0;
}