#include <iostream>
using namespace std;

#define N 5
int A[N];

int front = -1;
int rear = -1;

void enqueue(int x)
{
    if (rear == N - 1)
    {
        cout << "Queue Overflow" << endl;
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    rear++;
    A[rear] = x;
    cout << "Inserted " << x << endl;
}

void dequeue()
{
    if (front == -1 && rear == -1) // if (front == -1 || front > rear)
    {
        cout << "Queue Underflow" << endl;
        return;
    }
    cout << "Deleted " << A[front] << endl;
    front++;
}

int main()
{
    dequeue();
    enqueue(2);
    enqueue(4);
    enqueue(6);
    dequeue();
    return 0;
}
