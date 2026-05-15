#include<iostream>

using namespace std;
int main()
{
  for (int i=0; i < 40; i++) 
{
    if (i==2){
        continue;
    } 
    cout<<i<<endl;
}

 //for (int i=0; i < 40; i++) 
//{
  //  if (i==2){
    //    break;
    //} 
    //cout<<i<<endl;
//}



return 0;
}

/*
NOTES:
1.Break Statements in C++
Break statements in loops are used to terminate the loop.

2.Continue Statements in C++
continue statements are somewhat similar to break statements. The main difference is that the break statement 
entirely terminates the loop, but the continue statement only terminates the current iteration.

*/