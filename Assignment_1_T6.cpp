// Assignment 1 Task 8b

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int n;


int main()
{
    printf("Please input a postive number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            printf("%d", j);
        }
    printf("\n");
    }
    return 0;
}