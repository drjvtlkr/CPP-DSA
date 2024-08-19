#include <bits/stdc++.h>
using namespace std;

void forLoop(int n)
{
    int k = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (j >= k)
            {
                cout << "* ";
            }
            else
                cout << " ";
        }
        k--;
        cout << endl;
    }
}

void whileLoop(int n){
    int i=0, j=0, k=0;

    while (i<n)
    {
        while (k<= n-i-2)
        {
            cout<< " ";
            k++;
        }
        k=0;
        while (j<=i)
        {
            cout << "* ";
            j++;
        }
        j=0;
        i++;
        cout <<endl;
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