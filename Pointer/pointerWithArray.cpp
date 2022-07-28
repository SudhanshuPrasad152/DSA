#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10] = {4, 5, 6};
    cout<<"Address of location 0 is "<<arr<<endl;
    cout<<"Address of location 0 is "<<&arr[0]<<endl;
    
    cout<<"Element 1: "<<*arr<<endl;
    cout<<"Element 2: "<<*(arr + 1)<<endl;
    cout<<"Add1: "<<(*arr) + 1<<endl;
    return 0;
}