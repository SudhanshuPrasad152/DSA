#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5];
    int i = 0;
    while(i < 5){
        arr[i] = i;
        cout<<&arr[i]<<" "<<sizeof(arr[i]);
        i++;
    }
    return 0;
}