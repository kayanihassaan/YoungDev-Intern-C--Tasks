#include <iostream>

using namespace std;

int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int *arr = new int[size];

    for (int i = 0; i < size; ++i)
    {
        cout << "Enter value for element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}
