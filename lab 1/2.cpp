#include <iostream>
using namespace std;

void deletion(int arr[], int &n, int index)
{
    if (index < 0 || index >= n)
    {
        cout << "Invalid index" << endl;
        return;
    }
    for (int i = index; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
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
    int index = 2;
    printf("Before deletion: ");
    printArray(arr, n);
    deletion(arr, n, index);
    printf("After deletion: ");
    printArray(arr, n);
    return 0;
}
