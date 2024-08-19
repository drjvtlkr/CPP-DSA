#include <bits/stdc++.h>
using namespace std;

void loop(int n)
{
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}

void loop2(int n)
{
    int num = 1, i = 0, j = 0;
    while (i <= n)
    {
        while (j <= i - 1)
        {
            cout << num << " ";
            num++;
            j++;
        }
        j = 0;
        i++;
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    loop(n);
    loop2(n);
    return 0;
}