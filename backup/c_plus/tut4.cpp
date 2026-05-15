#include <iostream>
using namespace std;

int main ()
{
    //int a= 14;
    //int b= 15;

    int a=14 , b=15;
    float pi=3.14;
    
    cout<< "THIS IS TUTORIAL 4 .\n Here the value of a is  "<<a<<".\n The value of b is  "<<b ;
       

    cout<<"\n The value of pi is: "<<pi;
    
        return 0;
    

}


/*
NOTES:

1.Variable Scope
The scope of a variable is the region in the program where the existence of that variable is valid. For example, consider this analogy - if one person travels to another country illegally, we will not consider that country as its scope because he doesn't have the necessary documents to stay in that country.

Base on scope, variables can be classified into two types:

Local variables
Global variables
Local variables:
Local variables are declared inside the braces of any function and can be assessed only from there. 

Global variables:
Global variables are declared outside any function and can be accessed from anywhere

2.Data Types
Data types define the type of data that a variable can hold; for example, an integer variable can hold integer data, a character can hold character data, etc.

Data types in C++ are categorized into three groups:

Built-in
User-defined
Derived
1. Built-in Data Types in C++:
Int
Float
Char
Double
Boolean
2. User-Defined Data Types in C++:
Struct
Union
Enum
Note: We will discuss the concepts of user-defined data types in another lecture. For now, understanding that these are user-defined data types is enough.

3. Derived Data Types in C++:
Array
Pointer
Function
Note: We will discuss the concept of derived data types in another lecture. For now, understanding that these are derived data types is enough.

Rules to Declare Variables in C++
1.Variable names in C++ language can range from 1 to 255
2.Variable names must start with a letter of the alphabet or an underscore
3.After the first letter, variable names can contain letters and numbers
4.Variable names are case sensitive
5.No spaces and special characters are allowed
6.We cannot use reserved keywords as a variable name
*/