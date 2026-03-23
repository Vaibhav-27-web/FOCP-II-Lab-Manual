

#include <iostream>
#include <cmath>
using namespace std;

int factorial(int a)
{
    int ans = 1;
    for (int i = 1; i <= a; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the no of rows you want to print the pascals triangle for  ::  ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << factorial(n) / factorial(i) * factorial(abs(n - 1)) << " ";
        }
        cout << endl;
    }

    return 0;
}
