#include <iostream>
using namespace std;

const int SIZE = 5;
int stack[SIZE] = {10, 20, 30};
int top = 2;

void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow" << endl;
        return;
    }

    cout << stack[top] << " popped from stack" << endl;
    top--;
}

int main()
{
    pop();
    pop();

    return 0;
}
