#include <bits/stdc++.h>
using namespace std;

void printArray(int A[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

void rotate90Clockwise(int A[3][3], int order)
{
    int N = order;
    for (int i = 0; i < N / 2; i++)
    {
        for (int j = i; j < N - i - 1; j++)
        {
            int temp = A[i][j];
            A[i][j] = A[N - 1 - j][i];
            A[N - 1 - j][i] = A[N - 1 - i][N - 1 - j];
            A[N - 1 - i][N - 1 - j] = A[j][N - 1 - i];
            A[j][N - 1 - i] = temp;
        }
    }

    printArray(A, 3, 3);
    
}

int main(){
    int A[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin>>A[i][j];
        }
    }

    cout<<"Array before Rotation "<<endl;
    printArray(A, 3, 3);
    cout<<"Array after rotation "<<endl;
    rotate90Clockwise(A, 3);
    return 0;
}