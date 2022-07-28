#include<bits/stdc++.h>
using namespace std;

void rowWiseSum(int A[][4], int row, int col){
    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
            sum += A[i][j];
        }
        cout<<"Sum of "<<i+1<<" row is "<<sum<<endl;
    }
}

pair<int, int> maxRowSum(int A[][4], int row, int col){
    int maxi = INT_MIN;
    int rowIndex = -1;
    pair<int, int> p; 
    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
            sum += A[i][j];
        }
        if(maxi < sum){
            maxi = sum;
            rowIndex = i;
        }
    }
    p.first = maxi;
    p.second = rowIndex + 1;
    return p;
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

    rowWiseSum(A, 3, 4);
    pair<int, int> p = maxRowSum(A, 3, 4);
    cout<<"The maximum sum of row is "<<p.first<<" at row "<<p.second<<endl;
    return 0;
}