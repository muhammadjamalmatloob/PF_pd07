#include <iostream>
using namespace std;

void amplify(int n);

int main ()
{
    int n;
    cout << "Enter the number to amplify: ";
    cin >> n;
    amplify(n);
    return 0;
}

void amplify(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i%4 == 0)
            cout << i*10 << ", ";
        else
            cout << i << ", ";
    }
}