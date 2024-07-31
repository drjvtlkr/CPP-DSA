#include <bits/stdc++.h>
using namespace std;

// pass by value
void print(int num)
{
    int far = num + num;
    cout << far << " this here is being printed" << endl;
}

// pass by refference
void printThis(int &num)
{
    num = num + num;
    cout << num << " this being printed" << endl;
}
// here we can't int a new variable and save the sum into it because
// we are doing the sum operation on the direct refered address and so in that case
// the code will fail and will not give the right expected value

int main()
{
    int num;
    cin >> num;
    print(num);
    cout << num << endl;

    printThis(num);
    cout << num << endl;
    return 0;
}