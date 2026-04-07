#include<iostream>

using namespace std;

int main()
{
    // what is pointer ? it is data type which holds the address ofother data types

    int  a= 3;
    int *b=&a;
    b = &a;

    // & it is a address of operator
  cout<<"the value of address a is "<<&a<<endl;
  cout<<"the value of address b is "<<b<<endl;


    // * it is a derefrence operator
    cout<<"the value at address b is" <<*b<<endl;

    // pointer to pointer
    int** c=&b;

    cout<<"The address of b is" <<&b<<endl;
    cout<<"The address of b is" <<c<<endl;
    cout<<"The value at address c is"  <<*c<<endl;
    cout<<"The value at address value at (value_at(c)) is" <<**c<<endl;
    return 0;
}

/*
NOTES:
1.Pointers in C++
A pointer is a data type which holds the address of other data type. 
The “&” operator is called “address off" operator, and the "*” operator is called “value at” dereference operator. 

2.pointer to Pointer
Pointer to Pointer is a simple concept, in which we store the address of one Pointer to another pointer
*/