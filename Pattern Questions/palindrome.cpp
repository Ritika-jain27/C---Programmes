
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " Enter number of number : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        if (i > 1)
        {
            for (int j = 2; j <= i; j++)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    /* Another way:-

    int j;

    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout <<"  ";
        }
        int k=i;
        for (; j <=n; j++)
        {
            cout << k--<<" ";
        }
        k=2;
        for(;j<=n+i-1;j++)
        {
             cout<<k++<<" ";
        }
        cout << endl;
    }
*/
}
