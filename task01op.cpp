#include <iostream>
using namespace std;

void diamond(int r);

int main ()
{
    int r;
    cout << "Enter number of rows: ";
    cin >> r;
    diamond(r);
    return 0;
}

void diamond(int r)
{
    for (int i = r; i >=1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}