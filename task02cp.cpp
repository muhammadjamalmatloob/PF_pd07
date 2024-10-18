#include <iostream>
using namespace std;

void half_diamond(int r);

int main ()
{
    int r;
    cout << "Enter number of rows: ";
    cin >> r;
    half_diamond(r);
    return 0;
}

void half_diamond(int r)
{
    for (int i = 1; i <= r/2; i++)
    {
        for (int j = 1; j <= r/2-i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = r/2; i >=1; i--)
    {
        for (int j = 1; j <= r/2-i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}