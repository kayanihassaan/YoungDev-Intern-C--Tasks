#include <iostream>
#include <algorithm>
using namespace std;
template <typename T>
void bubbleSort(T arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template <typename T>
void printArray(const T arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int intArr[] = {64, 25, 12, 22, 11};
    int size = sizeof(intArr) / sizeof(intArr[0]);

    cout << "Original integer array: ";
    printArray(intArr, size);

    bubbleSort(intArr, size);

    cout << "Sorted integer array: ";
    printArray(intArr, size);

    double doubleArr[] = {64.1, 25.5, 12.3, 22.8, 11.7};
    size = sizeof(doubleArr) / sizeof(doubleArr[0]);

    cout << "Original double array: ";
    printArray(doubleArr, size);

    bubbleSort(doubleArr, size);

    cout << "Sorted double array: ";
    printArray(doubleArr, size);

    return 0;
}
