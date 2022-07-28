#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = INT16_MAX, max = INT16_MIN;
    if (n == 1)
    {
        cout << "Maximum Element is: " << arr[0] << endl;
        cout << "Minimum Element is: " << arr[0] << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (min < arr[i])
                min = arr[i];
            if (max > arr[i])
                max = arr[i];
        }
        cout << "Minimum Element is: " << min << endl;
        cout << "Maximum Element is: " << max << endl;
    }
    return 0;
}