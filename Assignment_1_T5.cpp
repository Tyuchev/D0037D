// Assignment 1 Task 7

#include <iostream>
#include <string>
using namespace std;
int n;
int bounce(int n);

int main()
{
    cout << "Please input a positive number" << endl;
    cin >> n;
    cout << "\n";
    bounce(n);
    cout << "\n";
    return 0;
}

int bounce(int n)
{
    if (n < 0)
    {
        cout << "Negative numbers are not valid";
    }
    else if(n == 0)
    {
        cout << n << endl;
    }
    else if(n > 0)
    {
        cout << n << endl;
        bounce(n-1);
        cout << n << endl;
    }
}