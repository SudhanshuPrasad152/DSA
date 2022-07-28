#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size){

    // base case
    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }
    else{
        return isSorted(arr + 1, size - 1);
    }
}

int main(){
    int arr[] = {3 , 4, 7, 8, 9, 11, 15};
    int size = 7;

    cout<<isSorted(arr, size)<<endl;
    return 0;
}