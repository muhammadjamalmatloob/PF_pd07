#include <iostream>
#include <string>
using namespace std;

string check_treated_patients(int days);

int main()
{
    int days;
    cout << "Enter number of days you visited hospital: ";
    cin >> days;
    cout << check_treated_patients(days);
}

string check_treated_patients(int days)
{
    int doctors = 7, treated = 0, untreated = 0, patients;
    for (int i = 1; i <= days; i++)
    {
        cout << "Number of patients who visited hospital on Day " << i << ": ";
        cin >> patients;
        if (i % 3 == 0 && treated < untreated)
        {
            doctors++;
        }
        if (patients > doctors)
        {
            treated += doctors;
            untreated += (patients - doctors);
        }
        else
        {
            treated += patients;
        }
    }
    return "Treated Patients: " + to_string(treated) + "\nUntreated Patients: " + to_string(untreated);
}