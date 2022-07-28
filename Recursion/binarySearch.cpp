#include<bits/stdc++.h>
using namespace std;

bool bSearch(int *arr, int s, int e, int key){

    // base case1
    // element not found
    if(s > e){
        return 0;
    }

    int mid = s + (e - s)/2;
    // base case2
    // element found
    if(arr[mid] == key){
        return 1;
    }

    if(key > arr[mid]){
        return bSearch(arr, mid + 1, e, key);
    }
    else{
        return bSearch(arr, s, mid - 1, key);
    }
}

int main(){
    int arr[] = {2, 4, 1, 3, 9, 10, 15};
    int size = 7;
    int key = 14;

    cout<<"present or not "<<bSearch(arr, 0, size - 1, key)<<endl;
}