#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

void printfib(int n)
{
    if (n == 0 | n == 1)
    {
        cout << n << endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout << fib(i) << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    if (n < 0)
    {
        cout << "Invalid input" << endl;
    }
    else
    {
        cout << "Fibonacci series: ";
        printfib(n);
    }
    return 0;
}
