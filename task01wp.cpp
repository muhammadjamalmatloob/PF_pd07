#include <iostream>
using namespace std;

void triangle(int r);

int main ()
{
    int r;
    cout << "Enter number of rows: ";
    cin >> r;
    triangle(r);
    return 0;
}

void triangle(int r)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}