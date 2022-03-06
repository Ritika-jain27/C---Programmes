#include <iostream>
using namespace std;
int main()
{
    int row, col, i, j;
    cout << "Enter Number of Rows & coloumns in rectangle : ";
    cin >> row >> col;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
                cout << "*";

            else
                cout << " ";
        }
        cout << endl;
    }
}
