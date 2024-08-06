# Control-Structures
## 5. Decision Making Statements
### Aim
To Study and implement C++ decision making statements.
### Theory
In C++, decision-making statements allow a program to choose different paths of execution based on conditions. The primary decision-making statements in C++ are:
1. if Statement
2. else-if Statement
3. switch statement
#### If Statement
The 'if' statement evaluates a condition, and if the condition is true, the block of code inside the 'if' statement is executed.
#### Else-if Statement
The else-if is used to check multiple conditions. If one of the conditions is true, the corresponding block of code is executed.
#### Switch Statement
The switch statement is used to execute one block of code from multiple options. It is typically used when there are many conditions based on a single variable.
### Code
```
(a) //Name:Tanay Shivankar
//Prn:23070123163
#include<iostream>
using namespace std;

int main() 
{
    int a, b, c, day;
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
(b) #include <iostream>
using namespace std;
int main(){
int day = 4;
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
}
}
### Output
### Conclusion
we learnt about decision making statements in C++ and how to use them.
