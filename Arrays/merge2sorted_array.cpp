#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> arr1, vector<int> arr2)
{
    vector<int> arr;
    int i = 0;
    int j = 0;
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] <= arr2[j])
        {
            arr.push_back(arr1[i]);
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            arr.push_back(arr2[j]);
            j++;
        }
    }
    while (i < arr1.size())
    {
        arr.push_back(arr1[i]);
        i++;
    }
    while (j < arr2.size())
    {
        arr.push_back(arr2[j]);
        j++;
    }

    return arr;
}

void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> arr1{1, 2, 3, 5, 7, 9};
    vector<int> arr2{2, 4, 6, 8};
    vector<int> arr = merge(arr1, arr2);
    cout << "merge sorted array" << endl;
    print(arr);
    return 0;
}
