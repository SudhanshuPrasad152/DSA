#include <iostream>
using namespace std;

int findmax(int *arr, int size)
{
    int max = INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n, i, j;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = findmax(arr, n);
    int arr2[max + 1];
    for (i = 0; i < n; i++)
    {
        int key = arr[i];
        j = i+1;
        while (j < n)
        {
            if (key == arr[j])
                arr2[key]++;
            j++;
        }
    }
    for (int i = 0; i < max + 1; i++)
    {
        if (arr2[i] == 1)
        {
            cout << "Unique Element is " << arr2[i] << endl;
        }
    }
    return 0;
}