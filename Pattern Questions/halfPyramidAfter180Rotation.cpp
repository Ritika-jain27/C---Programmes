#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "Enter Number n";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = n-i-1; j > i+1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}