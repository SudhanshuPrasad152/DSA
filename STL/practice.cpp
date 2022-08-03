#include<bits/stdc++.h>
using namespace std;

int main(){
    //initializing and printing dynamic array
    int n;
    cin>>n;
    /*int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
    //initializing and printing set
    set<int> s;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    for(auto it: s){
        cout<<it<<" ";
    }

    // initializing and printing map
    map<string,int> m;
    m["Sudhanshu"] = 15;
    m["Shahi"] = 1;
    m["Sahil"] = 23;
    m["Ayush"] = 11;

    for(auto it: m){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    //Questions
    //given N elements, print the elements that occurs maximum number of times
    map<int,int> m;
    int maxi = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        m[x]++;
        if(m[x] > m[maxi]){
            maxi = x;
        }
    }
    cout<<"Element that occurs maximum time "<<maxi<<" Occurence is "<<m[maxi]<<endl;
    

    //bitset and its functions
    bitset<5> bt;
    cin>>bt;
    cout<<bt.all()<<endl;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    int x;
    cin>>x;
    auto it = lower_bound(v.begin(), v.end(), x);
    int index = it - v.begin();
    cout<<index<<endl;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    int x;
    cin>>x;
    int index = upper_bound(v.begin(), v.end(), x) - v.begin();
    if(v[index - 1] == x && index >= 0){
        cout<<"Last occurence Found at "<<index - 1<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    */
    string s = "bca";
    sort(s.begin(), s.end());
    do{
        cout<<s<<endl;
    }
    while(next_permutation(s.begin(), s.end()));
    return 0;
}