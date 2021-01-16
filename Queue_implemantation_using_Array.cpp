//** Auther : Abdullah Al Masum

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#define MAXX 10

using namespace std;

class SingleQueue
{
public:
    int front, rear;
    int arr[MAXX];

    SingleQueue()
    {
        front = rear = -1;
    }
    void insert(int val);
    void traverse();
    bool isFull();
    bool isEmpty();
    void deleteQ();
};

class DoubleEndedQueue
{
public:
    int arr[MAXX];
    int front, rearofDq;
    DoubleEndedQueue() { front = rearofDq = -1; }
    void addFront(int val);
    void addRear(int val);
    void deleteFront();
    void deleteRear();
    bool isFullDq();
    bool isEmpty();
    void traverse();
};

class CircularQueue
{
public:
    int front, rear;
    int arr[MAXX];

    CircularQueue()
    {
        front = rear = -1;
    }
    bool isFullCq();
    bool isEmptyCq();
    void enqueueCq(int val);
    void dequeueCq();
    void traverseCq();
};
bool SingleQueue ::isEmpty()
{
    if (rear == front)
    {
        return true;
    }
    return false;
}

bool SingleQueue ::isFull()
{
    if (rear == sizeof(arr) / sizeof(arr[0]))
    {
        return true;
    }
    return false;
}

void SingleQueue ::deleteQ()
{
    if (isEmpty())
    {
        cout << "Can not be deleted,Queue is already Empty" << endl;
        return;
    }
    cout << arr[front] << " is deleted" << endl;
    front++;
}

void SingleQueue::insert(int val)
{
    if (isFull())
    {
        cout << val << " can not be inserted" << endl;
        return;
    }
    rear++;
    if (front == -1)
    {
        front++;
    }
    arr[rear] = val;
}
void SingleQueue::traverse()
{
    cout << "Traversing ... ";
    int temp = front;
    if (temp == -1)
    {
        cout << "Queue is empty now" << endl;
        return;
    }
    while (rear >= temp)
    {
        cout << arr[temp] << " ";
        temp++;
    }
    cout << endl;
}

bool DoubleEndedQueue ::isEmpty()
{
    if (front == -1 || rearofDq == -1)
    {
        return true;
    }
    return false;
}
bool DoubleEndedQueue ::isFullDq()
{
    if (rearofDq >= MAXX /* sizeof(arr) / sizeof(arr[0]) */)
    {
        return true;
    }
    return false;
}
void DoubleEndedQueue ::addRear(int val)
{
    if (isFullDq())
    {
        cout << "Dequeue is Full " << val << " can't be added" << endl;
        return;
    }
    if (isEmpty())
    {
        front++;
        rearofDq++;
        arr[rearofDq] = val;
        return;
    }
    rearofDq++;
    arr[rearofDq] = val;
    return;
}
void DoubleEndedQueue ::addFront(int val)
{
    if (front <= 0)
    {
        cout << val << " can't be add at begining" << endl;
        return;
    }
    front--;
    arr[front] = val;
    return;
}
void DoubleEndedQueue ::traverse()
{
    if (isEmpty())
    {
        cout << "I found,Dequeue is Empty" << endl;
        return;
    }
    int temp = front;
    while (temp <= rearofDq)
    {
        cout << arr[temp] << " ";
        temp++;
    }
    cout << endl;
    return;
}
void DoubleEndedQueue ::deleteFront()
{
    if (isEmpty())
    {
        cout << "Element can not be deleted as Dequeue is Empty" << endl;
        return;
    }
    front++;
    return;
}
void DoubleEndedQueue ::deleteRear()
{
    if (isEmpty())
    {
        cout << "Element can not be deleted as Dequeue is Empty" << endl;
        return;
    }
    rearofDq--;
    return;
}

bool CircularQueue ::isFullCq()
{
    int len = sizeof(arr) / sizeof(arr[0]);
    // int diff = front - rear % len;
    // if (diff == 1 || diff == -1)
    // {
    //     return true;
    // }
    if (front == 0 && rear == len - 1)
    {
        return true;
    }
    if (front == rear + 1)
    {
        return true;
    }
    return false;
}
bool CircularQueue ::isEmptyCq()
{
    if (front == -1)
    {
        return true;
    }
    return false;
}
void CircularQueue ::enqueueCq(int val)
{
    if (isFullCq())
    {
        cout << "Circular Queue is Full. " << val << " can't be added" << endl;
        return;
    }
    if (front == -1)
    {
        front++;
    }
    rear = (rear + 1) % (sizeof(arr) / sizeof(arr[0]));
    arr[rear] = val;
    return;
}
void CircularQueue ::dequeueCq()
{
    if (isEmptyCq())
    {
        cout << "Circular Queue is Already empty" << endl;
        return;
    }
    int tem = front;
    front = (front + 1) % (sizeof(arr) / sizeof(arr[0]));
    cout << arr[tem] << " is deleted" << endl;
    return;
}
void CircularQueue ::traverseCq()
{
    if (isEmptyCq())
    {
        cout << "Traversing... Circular Queue is Empty" << endl;
        return;
    }
    int temp = front;
    do
    {
        cout << " value: " << arr[temp];
        temp = (temp + 1) % (sizeof(arr) / sizeof(arr[0]));
        cout << "  at " << temp << endl;
    } while (temp != rear);
    cout << endl;
    return;
}
int main()
{
    SingleQueue q1;
    q1.traverse();
    q1.insert(5);
    q1.insert(6);
    q1.insert(4);
    q1.traverse();
    q1.deleteQ();
    q1.traverse();

    DoubleEndedQueue dq;
    dq.traverse();
    dq.addRear(49);
    dq.addFront(44);
    dq.addRear(29);
    dq.addRear(36);
    dq.addRear(69);
    dq.traverse();
    dq.deleteFront();
    dq.traverse();
    dq.addFront(66);
    dq.traverse();

    CircularQueue cq;
    cq.traverseCq();
    cq.enqueueCq(2);
    cq.enqueueCq(3);
    cq.enqueueCq(4);
    cq.enqueueCq(5);
    cq.enqueueCq(6);
    cq.enqueueCq(7);
    cq.enqueueCq(8);
    cq.enqueueCq(9);
    cq.enqueueCq(10);
    cq.enqueueCq(11);
    cq.enqueueCq(12);
    cq.enqueueCq(13);
    cq.traverseCq();
    cq.dequeueCq();
    cq.traverseCq();
    cq.enqueueCq(15);
    cq.traverseCq();
    cq.enqueueCq(16);
    cq.traverseCq();

    //int ae[11];
    //cout << sizeof(ae) / sizeof(ae[0]) << endl;
    return 0;
}