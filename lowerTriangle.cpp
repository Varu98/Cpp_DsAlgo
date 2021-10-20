#include <iostream>
using namespace std;

void upperTriangle()
{
}

int main()
{
    int arr[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 7, 1, 8},
                     {3, 14, 15, 16}};
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            if (i > j)
                cout << "0 \t";
            else
            {
                cout << arr[i][j] << " \t";
            }
        }
        cout << endl;
    }

    return 0;
}