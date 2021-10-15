// This is a program that will search by binary method and return the index of the element

#include <iostream>
using namespace std;

void binarySearch(int data_array[], int elementToFind, int length)
{

    int low = 0;
    int high = length;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int guess = data_array[mid];

        if (guess == elementToFind)
        {
            cout << "The Element is found at " << mid << " th index " << endl;
            return;
        }
        else if (guess > elementToFind)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << "the element does not exist in the array" << endl;
    return;
}

int main()
{
    int data_array[] = {2, 10, 23, 44, 100, 121};

    int lengthArray = sizeof(data_array) / sizeof(int);
    cout << sizeof(data_array) << endl;
    cout << sizeof(int) << endl;
    cout << lengthArray << endl;

    binarySearch(data_array, 3, lengthArray);  // not found case
    binarySearch(data_array, 2, lengthArray);  // found at corner case
    binarySearch(data_array, 44, lengthArray); //found at middle case

    return 0;
}