#include <iostream>
#include <cstdlib>  // rand, srand
#include <ctime>    // time
using namespace std;

// Recursive function
int myFunction(int n) {
    int i = 0;
    if (n <= 0) {
        return 0;  // Base case
    } else {
        i = rand() % n;  // 0 se n-1 random number
        cout << "this\n"; // print recursion step
        return myFunction(i) + myFunction(n - 1 - i);
    }
}

int main() {
    srand(time(0));  // initialize random generator

    int n;
    cout << "Enter n: ";
    cin >> n;

    int result = myFunction(n);

    cout << "Result: " << result << endl;
    return 0;
}
