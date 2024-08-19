#include<bits/stdc++.h>
using namespace std;

void forLoop(int n){
    for (int i = 0; i < n; i++)
    {
        int space =i;
        for (int j =  0; j < 2*n-i-1; j++)
        {
            if (space)
            {
                cout << "  ";
                space--;
            }
            else
            {
                cout << "* ";
            }            
        }
        cout << endl;
    }
    
}

void whileLoop(int n){
    int i=0,j;
    while (i<n)
    {
        int space =i;
        j=0;

        while (j<2*n-i-1)
        {
            if (space)
            { 
                cout << "  ";
                space--;
            }
            else
            {
                cout << "* ";
            }
            j++;
        }
        cout << endl;
        i++;
    }
}

int main(){
    int n;
    cin >> n;
    forLoop(n);
    whileLoop(n);
    return 0;
}