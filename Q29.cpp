
#include <iostream>
using namespace std;

int main()
{

    int templog[30];
    int min = 0;
    for (int i = 0; i < 30; i++)
    {
        cout << "Enter the temprature for day " << i << " :: ";
        cin >> templog[i];
        if (templog[i] < min)
        {
            min = templog[i];
        }
    }
    cout << "The minimum temprature for 30 days is " << min;

    return 0;
}
