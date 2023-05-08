#include<bits/stdc++.h>
using namespace std;

int main(){
    int mat[10][10], size;
     cout<<"Enter Size of Matrix"<<endl;
    cin>>size;

    cout<<"Enter elements of matrix"<<endl;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cin>>mat[i][j];
        }
    }

    int leftSum = 0;
    int rightSum = 0;
    int i = 0, j = 0;
    while(i != size && j != size){
        leftSum += mat[i++][j++];
    }
    i = 0;
    j = size - 1;
    while(i != size && j >= 0){
        rightSum += mat[i++][j--];
    }

    cout<<"Answer is "<< abs(leftSum - rightSum);
}