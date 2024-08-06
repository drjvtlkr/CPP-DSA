#include <bits/stdc++.h>
using namespace std;

void forLoop(int n)
{
    int k = 2 * n - 2;

    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < n - i; j++)
            cout << "  ";
        k = k - 2;
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void whileLoop(int n)
{
    int i = n, j = 0, k = 0;
    while (i > 0)
    {
        while (k < (n - i))
        {
            cout << "  ";
            k++;
        }
        k = 0;
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

int main()
{
    int n;
    cin >> n;
    forLoop(n);
    whileLoop(n);
    return 0;
}