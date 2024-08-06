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
##### Syntax: -
```
if(condition)
{
   // will execute the code here depending on if the condition is satisfied 
}
```
#### Else-if Statement
The else-if is used to check multiple conditions. If one of the conditions is true, the corresponding block of code is executed.
##### Syntax: - 
```
if(condition_a)
{
  // will execute the code depending whether the condtion_a is satisfied  
}
else if(condition_b)
{
  // will excecute the code depending whether the condtion-a is not satisfied and condition_b is satsified  
}
else
{
  // will execute the code if both t e condtions are not satisfied  
}
```
#### Switch Statement
The switch statement is used to execute one block of code from multiple options. It is typically used when there are many conditions based on a single variable.
#### syntax:- 
```
switch (expression)
{
  case value_1;
  // statement 1 
  break;
  case value_2:
  //statement 2
  break;
  default:
  //default_statements
  break;
}
```
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
```
### Output
![image](https://github.com/user-attachments/assets/8a5ab02f-d95c-46e3-be31-b2c95f54220c)
![image](https://github.com/user-attachments/assets/b96517b5-8055-44a3-ad4c-79585debf664)

### Conclusion
we learnt about decision making statements like if, else if, and switch case in C++ and how to use them.

=============================================================================================================
