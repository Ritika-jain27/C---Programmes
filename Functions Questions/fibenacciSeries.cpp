#include <iostream>
using namespace std;

void fibenacci(int n)
{
    int t1 = 0, t2 = 1, nextterm;
    for (int i = 1; i <= n; i++)
    {
        cout << t1 << " ";
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;
    }
    return;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    fibenacci(n);
    return 0;
}