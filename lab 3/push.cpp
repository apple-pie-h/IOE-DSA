#include <iostream>
using namespace std;

const int SIZE = 5;
int stack[SIZE];
int top = -1;

void push(int data)
{
    if (top == SIZE - 1)
    {
        cout << "Stack Overflow" << endl;
        return;
    }

    stack[++top] = data;
    cout << data << " pushed into stack" << endl;
}

int main()
{
    push(10);
    push(20);
    push(30);

    return 0;
}
