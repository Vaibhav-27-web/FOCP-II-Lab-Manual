#include <iostream>
using namespace std;

int main()
{

    int salary[10];
    int total = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the salary of Employee " << i + 1 << " :: ";
        cin >> salary[i];
        total += salary[i];
    }
    int average = total / 10;
    cout << "The total salary of employees is :: " << total << endl;
    cout << "The average salary of employees is :: " << average << endl;

    return 0;
}
