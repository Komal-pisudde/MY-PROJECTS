#include<iostream>
using namespace std;



 class SimpleCalculator{
    int a, b;

    public:
        void getData()
        {

            cout << "Enter the value of a" << endl;
            cin >> a;
            cout << "Enter the value of b" << endl;
            cin >> b;

        }


        void performOperations()
        { 
            cout << "The value of a + b  is: " << a + b << endl;
            cout << "The value of a - b  is: " << a - b << endl;
            cout << "The value of a * b  is: " << a * b  << endl;
            cout << "The value of a / b  is: " << a / b  << endl;
        }
};


class  ScientificCalculator{
    
};

int main()
{
    
 SimpleCalculator calc;
  calc.getData();    
  calc.performOperations ();

    return 0;

}


