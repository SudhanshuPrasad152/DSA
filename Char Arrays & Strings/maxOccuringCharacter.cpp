#include <bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(string str)
{
    // Your code here
    int arr[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        int number = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > maxi)
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a'+ans;
    return finalAns;
}

int main(){
    string s;
    getline(cin, s);
    cout<<getMaxOccuringChar(s);
}