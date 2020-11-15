// Assignment 1 Task 8a

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
char n;
char start = 'A';


int main()
{
    printf("Please enter an uppercase letter: ");
    scanf("%c", &n);
    for (int i = 1; i <= (n - 'A' + 1); ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            printf("%c ", start);
        }
        ++start;
        printf("\n");
    }
    return 0;
}