#include<bits/stdc++.h>
using namespace std;

void colWiseSum(int A[][4], int row, int col){
    for(int i = 0; i < col; i++){
        int sum = 0;
        for(int j = 0; j < row; j++){
            sum += A[j][i];
        }
        cout<<"Sum of "<<i+1<<" col is "<<sum<<endl;
    }
}

int main(){
    int A[3][4];
   for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cin>>A[row][col];
        }
    } 

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cout<<A[row][col]<<" ";
        }
        cout<<endl;
    }

    colWiseSum(A, 3, 4);
    return 0;
}