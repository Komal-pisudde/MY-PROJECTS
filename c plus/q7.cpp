#include <iostream>
using namespace std;

int isPrime(int n)
{
    if (n <= 1) return 0;  // 0 and 1 are not prime
    if (n == 2) return 1;  // 2 is prime

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;  // divisible → not prime
    }

    return 1;  // prime
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n))
        cout << n << " is prime" << endl;
    else
        cout << n << " is not prime" << endl;

    return 0;
}
