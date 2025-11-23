#include <iostream>
// there are two types of header files :
//1. system header files : it comes with the compiler

//2. user defined header files :it is written by the programmer
// # include " this.h" //--> this will produce an error if this.h is no present in the current directory

using namespace std;
 int main()
 {
    int a=4, b=5;

    cout<<"This is the hello world program" << endl;

    cout <<"Types of operator in c++"<<endl;

    // aritmetic operators

    cout<<"the value of a + b is "<<a+b<<endl;
    cout<<"the value of a - b is "<<a-b<<endl;
    cout<<"the value of a * b is "<<a*b<<endl;
    cout<<"the value of a / b is "<<a/b<<endl;
    cout<<"the value of a % b is "<<a%b<<endl;
    cout<<"the value of a ++ b is "<<a++<<endl;
    cout<<"the value of a --  is "<<a--<<endl;
    cout<<"the value of ++a is "<<++a<<endl;
    cout<<"the value of --a is "<<--a<<endl;

    // assignment operator --> used to asssign value of variable 
    // int a=3,b=9;
    //char d ='d';

    // compariosn operator 
    cout<< " following are the comparison operator in c++"<<endl;
    cout<<"The value of a == b is " << (a==b)<<endl;
    cout<<"The value of a != b is " << (a!=b)<<endl;
    cout<<"The value of a >= b is " << (a>=b)<<endl;
    cout<<"The value of a <= b is " << (a<=b)<<endl;
    cout<<"The value of a > b is " << (a>b)<<endl;
    cout<<"The value of a < b is " << (a<b)<<endl;
    
   // logical operator 
   cout<< "following are the logical operator in c++"<<endl;
   cout<< " the value  of logic and operator ((a==b) && (a<b)) is:" <<((a==b) &&(a<b)) <<endl;
   cout<< " the value  of logic or operator ((a==b) ||(a<b)) is:" <<((a==b) ||(a<b)) <<endl;
   cout<< " the value  of logic not operator (!(a==b)) is:" <<(!(a==b))<<endl;
      


    return 0;
 }

 /*
 NOTES:
 1.Header Files in C++
"#include" is used in C++ to import header files in our C++ program. The reason to introduce the "<iostream>" header file into our program is
 that functions like "cout" and "cin" are defined in that header file. There are two types of header files:

1.System Header Files
System header files ships with the compiler. For example, “#include <iostream>”. To see the references for header files click here

2.User-Defined Header Files
The programmer writes User-defined header files himself. To include your header file in the program, you first need to make a header file in the current directory, and then you can add it.

2. OPERATORS IN C++
arithmetic 
assignment 
comparison 
 */