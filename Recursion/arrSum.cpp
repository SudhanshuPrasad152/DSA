#include<bits/stdc++.h>
using namespace std;

int arrSum(int *arr, int size){
    
	//base case
    if(size == 1){
        return arr[0];
    }

    return (arr[0] + arrSum(arr + 1, size - 1));
}

int main(){
    int arr[] = {3, 4, 7, 8, 9, 11, 15};
    int size = 7;

    int sum = arrSum(arr, size);
    cout<<"Sum is "<<sum<<endl;
    return 0;
}