#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number : ";
    cin>>n;
    for (int i = n; i >= 1; i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    /* Another way:-
    
    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=n+1-i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }*/
    
}

