#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, flag = 0;
    cout << " Enter any number to check whether it is prime or not : ";
    cin >> n;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << n<<" is non-prime number";
            flag++;
            break;
        }
    }

    if(flag==0){
        cout<<n<<" is prime number";
    }
}