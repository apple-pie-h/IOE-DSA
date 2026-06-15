#include <iostream>
using namespace std;

void insertion(int arr[], int &n, int element, int index)
{
    if (index < 0 || index > n)
    {
        cout << "Invalid index" << endl;
        return;
    }
    for (int i = n - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    n++;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    int n = 5;
    int el = 8, index = 2;
    printf("Before insertion: ");
    printArray(arr, n);
    insertion(arr, n, el, index);
    printf("After insertion: ");
    printArray(arr, n);
    return 0;
}
