#include <iostream>
using namespace std;

int main()
{
    int n;
    int i, j;
    cout << " Enter number of number : ";
    cin >> n ;
    for (i = 1; i <=n; i++)
    {
        for (j = 0; j <i ; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
