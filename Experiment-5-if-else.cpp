#include<iostream>
using namespace std;

int main() 
{
    int a, b, c;
    cout << "Enter the value for A" << endl;
    cin >> a;
    cout << "Enter the value for B" << endl;
    cin >> b;
    cout << "Enter the value for C" << endl;
    cin >> c;
    if (a >= b && a >= c) 
    {
        cout << "The greatest number is: " << a << endl;
    } 
    else if (b >= a && b >= c) 
    {
        cout << "The greatest number is: " << b << endl;
    } 
    else 
    {
        cout << "The greatest number is: " << c << endl;
    }

    return 0;
}