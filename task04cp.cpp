#include <iostream>
using namespace std;

int triangle(int t);

int main ()
{
    int t;
    cout << "Enter number of triangle: ";
    cin >> t;
    cout << "Dots in the triangle: " << triangle(t);
    return 0;
}

int triangle(int t)
{
    return (t*(t+1))/2;
}