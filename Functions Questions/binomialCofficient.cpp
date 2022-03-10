// finding nCr :- 
#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i=2;i<=n;i++)
    {
      fact*=i;
    }
    return fact;
}

int main()
{
    int n,r;
    cout << "Enter value of n & r : ";
    cin >> n>>r;
    cout<<factorial(n)/(factorial(r)*factorial(n-r));
    return 0;
}

