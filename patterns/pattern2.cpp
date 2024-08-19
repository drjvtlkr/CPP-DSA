#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

void pattern(int n)
{
    int i = 0, j = 0;
    while (i <= n)
    {
        while (j < i)
        {
            j++;
            cout << " * ";
        }
        j = 0;
        i++;
        cout << endl;
    }
    cout << endl;
}

void recur(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << " * ";
    recur(n - 1);
}

void recurssion(int n)
{
    if (n == 0)
    {
        return;
    }
    recurssion(n - 1);
    recur(n);
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    print(n);
    pattern(n);
    recurssion(n);
}