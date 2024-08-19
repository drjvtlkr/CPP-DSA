#include <bits/stdc++.h>

using namespace std;

void logic(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void logic2(int n)
{
    int i = n, j = 0;
    while (i > 0)
    {
        while (j < i)
        {
            cout << "* ";
            j++;
        }
        j = 0;
        i--;
        cout << endl;
    }
}

void recur(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << "* ";
    recur(n - 1);
}

void recursion(int n)
{
    if (n == 0)
    {
        return;
    }
    recur(n);
    cout << endl;
    recursion(n - 1);
}

int main()
{
    int n;
    cin >> n;
    logic(n);
    logic2(n);
    recursion(n);
    return 0;
}