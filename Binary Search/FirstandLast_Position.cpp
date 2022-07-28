#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){
    int s = 0, e = size - 1;
    int mid = s + (e - s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else {
            e = mid -1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key){
    int s = 0, e = size - 1;
    int mid = s + (e - s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else {
            e = mid -1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int main()
{
    int Evenarr[] = {2, 3, 4, 4, 4, 5, 6};
    cout << " First occurrence is " << firstOcc(Evenarr, 7, 4)<<endl;
    cout << " last occurrence is " << lastOcc(Evenarr, 7, 4)<<endl;
    return 0;
}