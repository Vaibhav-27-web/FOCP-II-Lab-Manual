
#include <iostream>
using namespace std;

int main()
{

    string input, palindrome;
    cout << "Enter your id  ::  ";
    cin >> input;
    for (int i = 0; i < input.length(); i++)
    {
        palindrome = palindrome + input[input.length() - i - 1];
    }
    if (palindrome == input)
    {
        cout << "This is a palindrome ID";
    }
    else
    {
        cout << "This is NOT a palindrome ID";
    }

    return 0;
}
