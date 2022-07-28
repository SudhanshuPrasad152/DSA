#include<bits/stdc++.h>
using namespace std;

void reverse(string& s, int i){
    if(i > s.size()/2 - 1){
        return;
    }

    swap(s[i], s[s.size() - i - 1]);

    return reverse(s, i + 1);
}

int main(){
    string s = "Sudhanshu";
    cout<<"Before "<<s<<endl;
    reverse(s, 0);
    cout<<"After "<<s<<endl;
    return 0;
}