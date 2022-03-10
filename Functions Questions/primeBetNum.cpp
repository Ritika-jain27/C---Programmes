#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a, b;
    cout << "Enter numbers to find prime number in between : ";
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i) == true)
        {
            cout << i << " ";
        }
    }

    return 0;
}



/* Another way : - 

#include <iostream>
#include <math.h>
using namespace std;

void printPrime(int num1, int num2)
{
    int max, min, pass = 0, i, j;
    if (num1 > num2)
    {
        max = num1;
        min = num2;
    }
    else
    {
        max = num2;
        min = num1;
    }

    for (i = min; i <= max; i++)
    {
        pass=0;
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                pass = 1;
                break;
            }
        }

        if (pass == 0)
        {
            cout << i << endl;
        }
    }
}
int main()
{
    int a,b;
    cout<<"Enter two numbers to find prime numbers in between:";
    cin>>a>>b;
    printPrime(a,b);
    return 0;
}

*/