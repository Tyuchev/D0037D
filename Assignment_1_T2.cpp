// Assignment 1 Task 4

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age;
    string address;
    bool married;
    float height;
    string str_age;
    string str_height;


    cout << "Please input your name: ";
    cin >> name;
    cout << "Please input your age: ";
    cin >> age;
    cin.ignore(1000, '\n');
    cout << "Please input your address: ";
    getline(cin,address);
    cout << "Are you married (true/false): ";
    cin >> boolalpha >> married;
    cout << "Please input your height in meters: ";
    cin >> height;
    cout << "\n";

    str_age = to_string(age);
    str_height = to_string(height);

    cout << "Name: " + name << endl;
    cout << "Age: " + str_age << endl;
    cout << "Address: " + address << endl;
    cout << "Married: ";
    cout << boolalpha << married << endl;
    cout << "Height: " + str_height << endl;
    cout << "\n";
}