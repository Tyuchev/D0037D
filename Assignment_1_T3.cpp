// Assignment 1 Task 5

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char name[20];
    int age;
    char address[40];
    int married;
    float height;
    char str_age[20];
    char str_height[20];


    printf("Please input your name: ");
    scanf("%[^\n]s", &name);
    printf("Please input your age: ");
    scanf("%d", &age);
    printf("Please input your address: ");
    scanf(" %[^\n]s", &address);
    printf("Are you married (1 or 0): ");
    scanf("%d",&married);
    printf("Please input your height in meters: ");
    scanf("%f", &height);
    printf("\n");

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Address: %s\n", address);
    printf("Married: %d\n", married);
    printf("Height: %f\n", height);
    printf("\n");

}