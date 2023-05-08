#include<bits/stdc++.h>
using namespace std;

bool comp(int a1, int a2){
    if(a1 > a2){
        return true;
    }
    return false;
}

int main(){
    int arr[] = {1, 4, 2, 9, 7, 6};
    int n = 6;
    sort(arr,arr + n, comp);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}