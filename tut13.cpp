#include<iostream>

using namespace std;

int main()
{
    // array example
    int marks[] ={23 ,45 ,56 ,89 };
     
     //int marks [4]={23,45,56,89};
     //cout<<marks[0]<<endl;
     //cout<<marks[1]<<endl;
     //cout<<marks[2]<<endl;
     //cout<<marks[3]<<endl;
     

     int mathmarks[4];
     mathmarks[0]=2278;
     mathmarks[1]=738;
     mathmarks[2]=378;
     mathmarks[3]=578;

     cout<<"These are math marks"<<endl;
     
     cout<<mathmarks[0]<<endl;
     cout<<mathmarks[1]<<endl;
     cout<<mathmarks[2]<<endl;
     cout<<mathmarks[3]<<endl;

     //you can change the value of an array

     marks[2]= 455;
     cout<<"This are marks"<<endl;
   //  cout<<marks[0]<<endl;
     //cout<<marks[1]<<endl;

    for (int i =0 ; i < 4; i++)
    {
    cout<<"the value of marks "<<i<<"is"<<marks[i]<<endl;
    }
     return 0;

// quick quiz : do the same using while and do while loops 

}

/*
NOTES:
What are Arrays in C++
1.An array is a collection of items which are of the similar type stored in contiguous memory locations.
2.Sometimes, a simple variable is not enough to hold all the data.
3.For example, let’s say we want to store the marks of 2500 students; initializing 2500 different variable for this task is not feasible.
4.To solve this problem, we can define an array with size 2500 that can hold the marks of all students.
5.For example int marks[2500];

Pointers and Arrays
Storing the address of an array into pointer is different than storing the address of a variable into the pointer because the name of the array is an address of the first index of an array. So to use ampersand "&" with the array name for assigning the address to a pointer is wrong.

a.&Marks --> Wrong
b.Marks --> address of the first block

*/