#include <bits/stdc++.h>

using namespace std;

void print(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

void pattern(int n)
{
    int i = 0, j = 0;
    while (i < n)
    {
        while (j < n)
        {
            cout << "* ";
            j++;
        }
        j = 0;
        i++;
        cout << endl;
    }
}

void recur(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << "  * ";
    recur(n-1);
}

void recursion(int n, int nn)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        recur(nn);
        cout << endl;
        recursion(n-1, nn);
    }
}

int main()
{
    int n;
    cin >> n;
    print(n);
    pattern(n);
    cout << n<< endl;
    recursion(n, n);
    
}
