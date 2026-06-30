#include <iostream>
using namespace std;

int queue[5];
int front = -1;
int rear = -1;
int size = 5;

void enqueue(int x) {
    if ((rear + 1) % size == front)
        cout << "Queue is Full" << endl;
    else if (front == -1) {
        front = rear = 0;
        queue[rear] = x;
    }
    else {
        rear = (rear + 1) % size;
        queue[rear] = x;
    }
}

void dequeue() {
    if (front == -1)
        cout << "Queue is Empty" << endl;
    else if (front == rear)
        front = rear = -1;
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
