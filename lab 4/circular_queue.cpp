#include <iostream>
using namespace std;

int queue[5];
int front = 0;
int rear = 0;
int size = 5;

void enqueue(int x) {
    if (front == (rear + 1) % size)
        cout << "Queue is Full\n";
    else {
        queue[rear] = x;
        rear = (rear + 1) % size;
    }
}

void dequeue() {
    if (front == rear)
        cout << "Queue is Empty\n";
    else
        front = (front + 1) % size;
}

int main() {
    enqueue(1);
    enqueue(2);
    dequeue();
    enqueue(3);
    dequeue();
    dequeue();

    return 0;
}
