// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 
#include<iostream>
#include<string>
using namespace std;

int main() 
{
    string name;

    cout << "What is your name? ";
    cin >> name;
    cout << "\nHello, " << name << "!" << endl;
    cout << "\nWelcome to C++ programming!" << endl;
    cout << endl;

    return 0;
}