#include <iostream>

using namespace std;
int main()
{
    int age;
    cout <<"tell me your age "<<endl;
    cin>>age;
    //selection control structure :switch case statements 

switch (age)
{
case 18:
    cout<<"you are 18" <<endl;
    break;

    case 19:
    cout<<"you are 19 "<<endl;
    break;

    case 20:
    cout<<"you are 20" <<endl;
    break;

default:
     cout<<"no special case "<<endl;
    break;
}

    return 0;
}