#include<bits/stdc++.h>
using namespace std;

int main(){
    int age[20];
    int sum = 0;
    int i = 0;
    while(cin>>age[i]){
        if(age[i] <= 1 || age[i] >= 120){
            cout<<"INVALID INPUT"<<endl;
        }
        else if(age[i] <= 17){
            sum +=200;
        }
        else if(age[i] <= 40){
            sum += 400;
        }
        else{
            sum += 300;
        }
        i = i + 1;
        if(i == 20)
            break;
    }
    
    cout<<sum<<endl;
}
