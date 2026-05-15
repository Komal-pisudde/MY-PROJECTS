#include<iostream>
#include <iomanip>
 
using namespace std;
int main()
{
 //int a=34;
 //cout<<"The value of a was:"<<a;
 //a=45;
 //cout<<"The value of a is :" <<a;
 
 //constant in c++
 //const float a=3.11;

 //cout<<"The value of a was:"<<a<<endl;
  //a = 45.6; //you will get an errror because a is constant
  //cout<<"The value of a is :"<<a<<endl;

  //int a=3,b=78,c=1234;
  //cout<<"The value of a is :"<<a<<endl;
  //cout<<"The value of b is :"<<b<<endl;
  //cout<<"The value of c is :"<<c<<endl;

    //cout<<"The value of a is : "<<setw (4)<<a<<endl;  
    //cout<<"The value of b is : "<<setw(4)<<b<<endl;
   // cout<<"The value of c is : "<<setw(4)<<c<<endl;

    //operator precedence

    int a=3,b=4;
    int c=a*5+b;
    
    cout<<c;

    return 0;
}

/*
NOTES:
1.Constants in C++
Constants are unchangeable; when a constant variable is initialized in a program, its value cannot be changed afterwards

2.Manipulator in C++
In C++ programming, language manipulators are used in the formatting of output. The two most commonly used manipulators are: "endl" and "setw".

1."endl" is used for the next line.
2."setw" is used to specify the width of the output.

3.Operator Precedence in C++
Operator precedence helps us to solve an expression. For example, in an expression "int c = a*b+c" the multiplication operator's precedence is higher than 
the precedence of addition operator, so the multiplication between "a & b" first and then addition will be performed.

Operator associativity helps us to solve an expression; when two or more operators have the same precedence, the operator
 associativity helps us to decide that we should solve the expression from "left-to-right" or from "right-to-left".


*/