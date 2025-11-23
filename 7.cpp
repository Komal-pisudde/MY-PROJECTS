#include<iostream>

using namespace std;

int c=45;
 
int main()
{
    //build in data types
 // int a,b,c ;

  // cout<<"Enter the valoue of a:"<<endl;
   //cin>>a;

  // cout <<"Enter the value of b:"<<endl;
   //cin>>b;

   //c=a+b;
   //cout<<"The sum is"<<c;
    //cout<<"The global c is"<< :: c ;
    
    float d =34.4f;
    long double e=34.4l;

    cout << "Thd value of d is " <<d<< endl<<"the value of e is"<<e;
     //float , double and ling double literals 
    cout<<"The size of 34.4 is"<<sizeof (34.4)<<endl;
    cout<<"The size of 34.4f is"<<sizeof (34.4f)<<endl;
    cout<<"The size of 34.4F  is"<<sizeof (34.4F)<<endl;
    cout<<"The size of 34.4 l is"<<sizeof (34.4l)<<endl;
    cout<<"The size of 34.4L is"<<sizeof (34.4L)<<endl;

     // reference variable 
   float x=454;
   float & y=x;
   cout <<x<<endl;
   cout <<y<<endl;



   return 0;
}  
