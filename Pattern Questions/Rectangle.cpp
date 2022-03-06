// Printing Rectangular shape star Box.

#include <iostream>
using namespace std;

int main()
{
    int row, col, i = 0, j = 0;
    cout << "Enter Number of Rows & coloumns in rectangle : ";
    cin >> row >> col;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
