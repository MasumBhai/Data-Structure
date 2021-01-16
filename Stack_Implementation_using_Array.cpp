/* 
//** Auther : Abdullah Al Masum
*/
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#define MAXX 10

using namespace std;

class Stackk
{
public:
    int top;
    int arr[MAXX];
    Stackk() { top = -1; }
    bool isEmpty();
    bool isFull();
    void push(int val);
    void pop();
    void peek();
    void traverse();
};

bool Stackk ::isEmpty()
{
    if (top == -1)
        return true;
}
return false;
}
bool Stackk ::isFull()
{
    if (top >= MAXX /*sizeof(arr) / sizeof(arr[0]) */)
    {
        return true;
    }
    return false;
}
void Stackk ::push(int val)
{
    if (isFull())
    {
        cout << val << " can not be pushed into stack" << endl;
        return;
    }
    top++;
    arr[top] = val;
    cout << val << " is pushed" << endl;
    return;
}
void Stackk ::pop()
{
    if (isEmpty())
    {
        cout << "Can not be popped" << endl;
        return;
    }
    cout << arr[top] << " is popped from stack" << endl;
    top--;
    return;
}
void Stackk ::traverse()
{
    if (isEmpty())
    {
        cout << "Stack is Empty at this moment" << endl;
        return;
    }
    cout << "Traversing... ";
    int temp = 0;
    while (temp != top + 1)
    {
        cout << arr[temp] << " ";
        ++temp;
    }
    return;
}
void Stackk ::peek()
{
    if (isEmpty())
    {
        cout << "can not be peeked as Stack is Empty" << endl;
        return;
    }
    cout << "At the top " << top << ", Top element is: " << arr[top] << endl;
    return;
}
int main()
{
    Stackk st;
    st.peek();
    st.push(5);
    st.traverse();
    st.peek();
    st.pop();
    st.push(9);
    st.traverse();
    return 0;
}