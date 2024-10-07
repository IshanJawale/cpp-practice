#include <iostream>
using namespace std;
int main()
{
    int r,c;
    cout << "Enter the Number of rows:\n";
    cin >> r;
    cout << "Enter the Number of columns:\n";
    cin >> c;
    int f[r][c], s[r][c], sum[r][c];
    cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> f[i][j];
        }
    }
    cout << "Enter the elements of the second matrix:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> s[i][j];
        }
    }

    cout << "The sum of the two matrices is:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = f[i][j] + s[i][j];
            cout << sum[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}