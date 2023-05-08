#include<bits/stdc++.h>
using namespace std;


int main(){
    unordered_map<int, int> mp;
    mp[1] = 1;
    mp[2] = 3;
    mp[1] = 4;
    for(auto it: mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
}