#include<bits/stdc++.h>
using namespace std;
#define N 3

//initializing matrix
void init(int arr[][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            arr[i][j] = 0;
        }
    }
}

void addEdge(int arr[][N], int src, int dest){
    arr[src][dest] = 1;
}

void printMatrix(int arr[][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int adjMat[N][N];
    init(adjMat);
    addEdge(adjMat, 0, 1);
    addEdge(adjMat, 1, 2);
    addEdge(adjMat, 2, 0);
    printMatrix(adjMat);
    return 0;
}