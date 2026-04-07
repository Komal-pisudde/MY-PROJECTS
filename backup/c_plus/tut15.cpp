#include<iostream>
using namespace std;

int sum(int a, int b){
 int c = a+b;
    return c;
}
int main(){
    int num1, num2;
    cout <<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1, num2);
    return 0;
}

/*
NOTES:

1.Functions in C++
Functions are the main part of top-down structured programming.
 We break the code into small pieces and make functions of that code. Functions help us to reuse the code easily.

2. Function Prototype in C++
The function prototype is the template of the function which tells the details of the function e.g(name, parameters) to the compiler.
Function prototypes help us to define a function after the function call.

a.Formal Parameters
The variables which are declared in the function are called a formal parameter.

b.Actual Parameters
The values which are passed to the function are called actual parameters.
*/