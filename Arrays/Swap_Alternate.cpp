#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    int temp;
    int i = 0, j = 1;
    while (j < 6)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i = i + 2;
        j = j + 2;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

