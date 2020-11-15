// Assignment 1 Task 6

#include <iostream>
#include <string>
using namespace std;
bool isPrime;
int isPrimeNumber(int n);
int n;

int main()
{
    cout << "Please input the number of Prime numbers you wish to print: " << endl;
    cin >> n;
    cout << "\n";
    int count = 0;
    for (int y = 2; count < n; y++)
    {
        if (isPrimeNumber(y) == false)
        {
            continue;
        }
        else if (isPrimeNumber(y) == true)
        {
            cout << y << endl;
            count = count + 1;
        }
    cout << "\n";    
    }

}


int isPrimeNumber(int z)
{
    bool isPrime = true;

    for (int x = 2; x <= z/2; x++)
    {
        if (z%x == 0)
        {
            isPrime = false;
            break;
        }
        else
        {
            continue;
        }
        
    }
    return isPrime;    
}
