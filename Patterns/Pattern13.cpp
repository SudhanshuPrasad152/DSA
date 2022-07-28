#include <iostream>
using namespace std;

int main()
{
    int i = 1, j, n;
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << char( 'A' + i + j - 2 ) << " ";
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}