#include <iostream>
using namespace std;

int main()
{
    int arr[4][4] = {{1, 2, 3, 4},
                     {2, 3, 4, 6},
                     {1, 2, 3, 4},
                     {9, 9, 7, 6}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                cout << arr[i][j] << "\t";
            }
            else
            {
                cout << "0 \t";
            }
        }
        cout << endl;
    }
    return 0;
}