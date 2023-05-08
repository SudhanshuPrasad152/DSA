#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> binary;
    while(n != 0){
        int rem = n%2;
        binary.push_back(rem);
        n = n / 2;
    }
    reverse(binary.begin(), binary.end());
    for(auto it:binary){
        cout<<it<<" ";
    }
}