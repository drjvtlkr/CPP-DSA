#include <bits/stdc++.h>
using namespace std;

int func(int n)
{
    int num = 65;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            char ch = char(num);
            cout << ch << " ";
        }
        num++;
        cout << endl;
    }
}

int func2(int n)
{
    int i = 1, j = 0, num = 65;
    char alpha = char(num);

    while (i <= n)
    {
        while (j <= i - 1)
        {
            cout << alpha << " ";
            j++;
        }
        alpha++;
        j = 0;
        i++;
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    func(n);
    func2(n);
    return 0;
}