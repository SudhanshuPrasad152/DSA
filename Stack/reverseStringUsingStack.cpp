#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<char> st;
    string s;
    cin>>s;
    int i = 0;
    while(i < s.length()){
        char ch = s[i];
        st.push(ch);
        i++;
    }
    string ans = "";
    while(!st.empty()){
        char ch = st.top();
        ans.push_back(ch);
        st.pop();
    }
    cout<<ans<<endl;
    return 0;

}