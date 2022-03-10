#include <iostream>
using namespace std;

int main()
{
    // revNum = reverse number , rem = remainder :
    int num, revNum = 0, rem;
    cout << "Enter any number to reverse: ";
    cin >> num;
    while (num > 0)
    {
        rem = num % 10;
        revNum = revNum * 10 + rem;
        num = num / 10;
    }
    cout << revNum;
    return 0;
}