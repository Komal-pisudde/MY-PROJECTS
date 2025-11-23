#include <iostream>

using namespace std;

int main()
{
    int num1 ,num2 ;
    cout<< "Enter the value ofnum1 : \n"; /* << is called insertion operator*/
    cin>> num1 ; /* >> is called extraction operatot*/

    cout<< "Enter the value of num2 :\n";
    cin>> num2 ;
     
    cout << "T he sum is "<< num1+num2;

    return 0;
}

/*
NOTES:
1.Basic Input and Output in C++
C++ language comes with different libraries, which helps us in performing input/output operations. In C++ sequence of bytes corresponding to input and output are commonly known as streams. There are two types of streams:

Input stream
In the input stream, the direction of the flow of bytes occurs from the input device (for ex keyboard) to the main memory.

Output stream
In output stream, the direction of flow of bytes occurs from main memory to the output device (for ex-display)

Important Points
1.The sign "<<" is called insertion operator
2.The sign ">>" is called extraction operator
3."cout" keyword is used to print
4."cin" keyword is used to take input at run time
*/