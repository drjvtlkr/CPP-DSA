#include <bits/stdc++.h>
using namespace std;

int func(int n)
{
    int count = 0, count1 = 0, k = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <=n - i; space++)
        {
            cout << "  ";
            count++;
        }
        while (k != 2 * i - 1)
        {
            if (count <= n - 1)
            {
                cout << i + k << " ";
                count++;
            }
            else
            {
                count1++;
                cout << i + k - 2 * count1 << " ";
            }
            k++;
        }
        count1 = count = k = 0;
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    func(n);
    return 0;
}