#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class Queue
{
    Node *front, *rear;

public:
    Queue()
    {
        front = rear = NULL;
    }

    // Enqueue
    void enqueue(int value)
    {
        Node *newNode = new Node(value);

        if (rear == NULL)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }

        cout << value << " inserted" << endl;
    }

    // Dequeue
    void dequeue()
    {
        if (front == NULL)
        {
            cout << "Queue Underflow" << endl;
            return;
        }

        Node *temp = front;
        cout << front->data << " deleted" << endl;

        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete temp;
    }

    // Display
    void display()
    {
        if (front == NULL)
        {
            cout << "Queue is Empty" << endl;
            return;
        }

        Node *temp = front;
        cout << "Queue: ";

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();

    q.display();

    return 0;
}
