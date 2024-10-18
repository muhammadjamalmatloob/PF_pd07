#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int count, tonnage;
    cout << "Enter the count of cargo for transprotation: ";
    cin >> count;
    float minibus, truck, train;
    for (int i = 1; i <= count; i++)
    {
        cout << "Enter the tonnage of cargo " << i << ": ";
        cin >> tonnage;
        if (tonnage <= 3)
        {
            minibus += tonnage;
        }
        else if (tonnage <= 11)
        {
            truck += tonnage;
        }
        else
        {
            train += tonnage;
        }
    }
    cout << fixed << setprecision(2) << (minibus * 200 + truck * 175 + train * 120) / (minibus + truck + train) << endl;
    cout << minibus / (minibus + truck + train) * 100 << " %\n";
    cout << truck / (minibus + truck + train) * 100 << " %\n";
    cout << train / (minibus + truck + train) * 100 << " %\n";
}