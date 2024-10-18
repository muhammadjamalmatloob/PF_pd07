#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n);

int main ()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << isPrime(n);
    return 0;
}

bool isPrime(int n)
{
    if (n == 2)
        return true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i == 0)
            return false;
    }
    return true;
}