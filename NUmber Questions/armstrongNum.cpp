#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // rem = remainder :
    int num, n = 0, rem;
    cout << "Enter any number to reverse: ";
    cin >> num;
    int number = num;
    while (num > 0)
    {
        rem = num % 10;
        n += rem * rem * rem;
        // n+=pow(rem,3);
        num = num / 10;
    }
    if (number == n)
    {
        cout << number << " is Armstrong Number";
    }
    else
        cout << number << " is not Armstrong Number";
}