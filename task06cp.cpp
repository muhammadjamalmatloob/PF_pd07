#include <iostream>
#include <cmath>
using namespace std;

int primorial(int n);
int prime(int n);
bool isPrime(int n);

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << primorial(n) << endl;
    return 0;
}

int primorial(int n)
{
    int count = 0, p = 2, result = 1;
    bool  condition = true;
    while (count < n)
    {
        for (int i = 2; i <= sqrt(p); i++)
        {
            if (p % i == 0)
            {
                condition = false;
            }
        }
        if (condition)
        {
            result *= p;
            count++;
        }
        condition = true;
        p++;
    }
    return result;
}