#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "Enter Number n";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}