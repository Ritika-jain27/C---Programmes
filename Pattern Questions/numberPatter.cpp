
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " Enter number of number : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // loop for printing spaces:
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // loop for printing stars:
        for (int j = 1; j <= i; j++)
        {
            cout << j<<" ";
        }
        cout << endl;
    }
}
