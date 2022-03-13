#include <iostream>
using namespace std;

int octalToDeci(int n)
{
    int x = 1, ans = 0;
    while (n > 0)
    {
        int y = n % 10;
        ans+= x * y;
        x*=8;
        n /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter Octal Number : ";
    cin >> n;
    cout << octalToDeci(n) << endl;

    return 0;
}