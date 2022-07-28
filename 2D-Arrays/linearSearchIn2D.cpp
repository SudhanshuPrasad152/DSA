#include<bits/stdc++.h>
using namespace std;

bool isPresent(int A[][4], int target, int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(target == A[i][j])
            return true;
        }
    }
    return false;
}

int main(){
    int A[3][4];
    // Taking input in the array
   for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cin>>A[row][col];
        }
    } 

    // Printing the Array
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cout<<A[row][col]<<" ";
        }
        cout<<endl;
    }
    
    int target;
    cin>>target;
    if(isPresent(A, target, 3, 4)){
        cout<<"Element Found!"<<endl;
    }
    else{
        cout<<"Element not found!"<<endl;
    }

    return 0;
}