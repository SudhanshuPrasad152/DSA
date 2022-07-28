#include<bits/stdc++.h>
using namespace std;

// converting uppercase character to lower case
char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9'){
        return ch;
    }
    else{
        return (ch - 'A' + 'a');
    }
}

// checking for valid character or not
bool isValidCharacter(char ch){
    if(ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9' || ch >= 'A' && ch <='Z'){
        return true;
    }
    else{
        return false;
    }
}

int getLength(string s)
{
    int length = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

bool checkPalindrome(string s, int n){
    int i = 0;
    int j = n - 1;
    while(i <= j){
        if(!(isValidCharacter(s[i]))){
            i++;
        }
        else if(!(isValidCharacter(s[j]))){
            j--;
        }
        else if(toLowerCase(s[i]) != toLowerCase(s[j])){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

int main(){
    string str;
    cout<<"Enter the string "<<endl;
    getline(cin, str);
    int length = getLength(str);
    cout<<checkPalindrome(str, length);
}