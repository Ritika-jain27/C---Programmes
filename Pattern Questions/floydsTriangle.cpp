#include <iostream>
using namespace std;

int main()
{
    int n;
    int i, j,count=1;
    cout << " Enter number of number : ";
    cin >> n ;
    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <=i ; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}
