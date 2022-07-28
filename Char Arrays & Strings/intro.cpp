#include <bits/stdc++.h>
using namespace std;

int getLength(char name[])
{
    int length = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

void reverseString(char name[])
{
    int i = 0;
    int j = getLength(name) - 1;
    for (i, j; i < j; i++, j--)
    {
        swap(name[i], name[j]);
    }
    cout << "Reverse of your name is " << name;
}

int main()
{
    char name[20];
    cout << "Enter your name ";
    cin >> name;

    cout << "Your name is " << name << endl;
    int length = getLength(name);
    return 0;
}