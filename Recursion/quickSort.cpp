#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int s, int e)
{
    int pivot = arr[s];

    // counting elements that are less than pivot
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // place pivot at right position
    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);
    int i = s;
    int j = e;
    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    // partion
    int i = partition(arr, s, e);

    // sort left part
    quickSort(arr, s, i - 1);

    // sort right part
    quickSort(arr, i + 1, e);
}

int main()
{
    int arr[15] = {3, 2, 1, 6, 7, 0, 9, 10};
    int n = 8;
    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}