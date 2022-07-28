#include <iostream>
using namespace std;

int leftocc(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (key == arr[mid])
        {
            ans = mid;
            e = mid - 1; // To find more occurunces on left side
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int rightocc(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (key == arr[mid])
        {
            ans = mid;
            s = mid + 1; // To find more occurunces on right side
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int Totalocc(int arr[], int size, int key){
    int Total = rightocc(arr, size, key) - leftocc(arr, size, key) + 1;
    return Total;
}

int main()
{
    int Evenarr[] = {2, 3, 4, 4, 4, 4, 4, 4, 5, 6};
    cout<<"Total number of occurence of elemnt 4 is "<<Totalocc(Evenarr, 10, 4);
    return 0;
}