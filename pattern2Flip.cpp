#include <bits/stdc++.h>

using namespace std;

void whileo(int n)
{
    int i = 0, j = 0, k = 0;
    while (i < n)
    {
        while (k < (n - i - 1))
        {
            cout << "  ";
            k++;
        }
        k = 0;
        while (j <= i)
        {
            cout << "* ";
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
    cout << "Your Entered Number is: " << endl
         << n << endl;
    for (int i = n; i > 0; i--)
    {

        for (int j = 1; j <= n; j++) // looping columns
        {
            if (j >= i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << "Now I'm running the while function"<< endl;
    whileo(n);
    return 0;
}