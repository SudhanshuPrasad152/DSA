#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s, int i, int j){
    if(i > j){
        return 1;
    }

    if(s[i] != s[j]){
        return 0;
    }
    else{
        return checkPalindrome(s, i + 1, j - 1);
    }
}

int main(){
    string s = "abbccccbba";
    if(checkPalindrome(s, 0, s.size() - 1)){
        cout<<"String is a palindrome"<<endl;
    }
    else{
        cout<<"String is not a palindrome"<<endl;
    }

}