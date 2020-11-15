// Assignment 1 Task 3

#include <iostream>
using namespace std;
int fr(int num);
int wle(int num);
int doing(int num);


int main()
{
    int number;
    int choice;

    cout << "Please input a number: ";
    cin >> number;
    cout << "Please choose the number 1, 2 or 3: ";
    cin >> choice;
    cout << "\n";
    
    if (choice == 1)
    {
        fr(number);
    }

    else if (choice == 2)
    {
        wle(number);
    }

    else if (choice == 3)
    {
        doing(number);
    }

    else
    {
        cout << to_string(choice) + " was not a valid option";
        cout << "\n";
    }
}

int fr(int num)
{
    for (int i = 0; i < num; i++)
    {
        string hello = "Hello World!";
        cout << hello << endl;
        cout << "\n";
    }
}

int wle(int num)
{
    int i = 0;
    while (i < num)
    {
        i = i + 1;
        string hello = "Hello World!";
        cout << hello << endl;
        cout << "\n";
    }
}

int doing(int num)
{
    int i = 0;
    do
    {
        i = i + 1;
        string hello = "Hello World!";
        cout << hello << endl;
        cout << "\n";   
    } while (i < num);    
}