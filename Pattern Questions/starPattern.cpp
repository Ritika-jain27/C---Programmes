
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " Enter number of number : ";
    cin >> n;

    // For upper part of the code:-
    for (int i = 1; i <= n; i++)
    {
        // loop for printing spaces:
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        // loop for printing stars:
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // For lower part of the code:-
    for (int i = n; i >= 1; i--)
    {
        // loop for printing spaces:
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        // loop for printing stars:
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
