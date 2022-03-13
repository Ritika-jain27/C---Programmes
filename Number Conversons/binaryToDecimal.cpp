#include <iostream>
using namespace std;

int binToDeci(int n)
{
    int x = 1, ans = 0;
    while (n > 0)
    {
        int y = n % 10;
        ans+= x * y;
        x*=2;
        n /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter Binary Number : ";
    cin >> n;
    cout << binToDeci(n) << endl;

    return 0;
}