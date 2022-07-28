#include<bits/stdc++.h>
using namespace std;

bool lSearch(int *arr, int size, int key){
    
    // base case
    if(size == 0){
        return 0;
    }

    if(arr[0] == key){
        return 1;
    }
    else{
        return lSearch(arr + 1, size - 1, key);
    }

}

int main(){
    int arr[] = {2, 4, 1, 3, 9, 10, 15};
    int size = 7;
    int key = 15;

    if(lSearch(arr, size, key)){
        cout<<"Key found!"<<endl;
    }
    else{
        cout<<"Key not found"<<endl;
    }
}