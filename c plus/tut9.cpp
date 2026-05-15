#include <iostream>

using namespace std;

int main()
{
    
   // cout<<"This is tutorial 9";
   //selection control structure if-else ladder

    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;

    if ((age<18) && (age>0 )){
        cout<<"You can not come to my party"<<endl;
    }

    else if (age==18){
        cout<<"you are a kid and you will not get a kid pass to the party"<<endl;
    }  

    else if(age<1){
        cout<<"you are not born"<<endl;
    }
    else {
        cout<<"You come to the party"<<endl;
    }

}

/*
NOTES:
1.Control Structures in C++
There are three types of basic control structures in C++.
1.Sequence structure refers to the sequence in which program execute instructions one after another.
2.Selection structure refers to the execution of instruction according to the selected condition, which can be either true or false.
 There are two ways to implement selection structures, by “if-else statements” or by “switch case statements”.
3. Loop structure refers to the execution of an instruction in a loop until the condition gets false.

2.IF Else in C++
If else statements are used to implement a selection structure.

3.Switch Statement in C++
In switch-case statements, the value of the variable is tested with all the cases
*/