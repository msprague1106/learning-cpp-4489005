// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>
using namespace std;

int a, b = 5; // string line comments

int main()
{
    bool my_flag; 
    unsigned int postive;

    a = 7;

    my_flag = false;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "flag = " << my_flag << endl;

    my_flag = true;
    cout << "flag = " << my_flag << endl;
    cout << "a + b = " << a + b << endl;    
    cout << "b - a = " << b - a << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;   
    
    postive = b - a;
    cout << "b - a (unsigned) =" << postive << endl;
    
    cout << endl << endl;

    return (0);
}
