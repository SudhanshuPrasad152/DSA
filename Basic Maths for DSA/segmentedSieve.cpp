#include<bits/stdc++.h>
using namespace std;

const int N = 1000000;
bool sieve[N+1];

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

vector<int> generatePrime(int n){
    vector<int> arr;
    for(int i = 2; i <= N; i++){
        if(sieve[i] == true){
            arr.push_back(i);
        }
    }
    return arr;
}

int main(){
    createSieve();
    int l, r;
    cin>>l>>r;

    // step1: generate all primes till squrt(r)
    vector<int> primes = generatePrime(sqrt(r));

    // step2: create a dummy array of size r - l + 1 and make everyone as 1
    int dummy[r - l + 1];
    for(int i = 0; i < r - l + 1; i++){
        dummy[i] = 1;
    }

    // step3: for all prime numbers marks its multiple as false
    for(auto pr:primes){
        int firstMultiple = (l/pr)*pr;
        if(firstMultiple < l){
            firstMultiple += pr;
        }
        for(int j = max(firstMultiple, pr*pr); j <= r; j += pr){
            dummy[j-l] = 0;
        }
    } 

    // step4: get/print all the primes
    for(int i = l; i <= r; i++){
        if(dummy[i-l] == 1){
            cout<<i<<" ";
        }
    }
    cout<<endl;

    return 0;
}