#include<bits/stdc++.h>
using namespace std;

bool checkSame(string s1, string s2){
    int i = 0;
    while(i < s1.size()){
        if(s1[i] != s2[i]) return false;
        i++;
    }
    return true;
}

string findMaxOccurence(string str){
    int size = str.size();
    string s1, s2, s3;
    int maxi = 0;
    for(int i = 0; i < size; i++){
        if(str[i] != ' '){
            s1.push_back(str[i]);
        }
        else{
            int count = 0;
            for(int j = 0; j < size; j++){
                
                if(str[j] != ' '){
                    s2.push_back(str[j]);
                }
                else if(s1.size() == s2.size() || str[i] == ' '){
                   
                    if(checkSame(s1, s2)){
                        count++;
                        if(count > maxi){
                            maxi = count;
                            s3 = s1;
                        }
                    }
                    s2.clear();
                }
            }
            s1.clear();
        }
    }
    return s3;
}

int main(){
    string str = "to this why is the the why the what the to and to why why why why ";
    cout<<findMaxOccurence(str)<<endl;
}

