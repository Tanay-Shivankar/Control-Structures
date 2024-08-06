//Name:Tanay Shivankar
//PRN:23070123163
#include <iostream>
using namespace std;
int main() 
{
    int a = 4;
    cout << "while loop" << endl;
    while (a<10)
    {
     a++;
    cout << a << endl<<endl;
    }
    cout << "do while loop" <<endl;
    do 
    {
     a+=5;
     cout << a << endl<<endl;
    }
     while (a<40);
    cout << "Nested For Loop" <<endl;
    int matrix[3][3];
     int value = 1;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matrix[i][j] = value++;
        }
    }
        cout << "3x3 Matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << std::endl;
    }
    return 0;
}