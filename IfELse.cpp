#include <bits/stdc++.h>

using namespace std;

int main()
{
    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "You are an adult" << endl;
    }
    else if (age < 18)
    {
        cout << "You are not an adult" << endl;
    }

    int marks;
    cin >> marks;
    if (marks >= 00 && marks <= 25)
    {
        cout << "F Grade";
    }
    else if (marks >= 25 && marks <= 44)
    {
        cout << "E Grade";
    }
    else if (marks >= 44 && marks <= 49)
    {
        cout << "D Grade";
    }
    else if (marks >= 50 && marks <= 59)
    {
        cout << "C garde";
    }
    else if (marks >= 60 && marks <= 79)
    {
        cout << "B Grade";
    }
    else if (marks >= 80 && marks <= 89)
    {
        cout << "A Grade";
    }
    else if (marks >= 90 && marks <= 100)
    {
        cout << "S Grade";
    }
    else
    {
        cout << "This is not a valid marks";
    }
}
