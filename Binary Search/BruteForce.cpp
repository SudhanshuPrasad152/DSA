#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return -1; // if element is not found return -1
}

int main()
{
    int Evenarr[] = {2, 5, 12, 15, 17, 20};
    int Oddarr[] = {4, 8, 12, 16, 30};
    int Evenindex = BinarySearch(Evenarr, 6, 17);
    cout << " Key Found at index " << Evenindex << endl;
    int Oddindex = BinarySearch(Oddarr, 5, 4);
    cout << "Key found at index " << Oddindex << endl;
    return 0;
}