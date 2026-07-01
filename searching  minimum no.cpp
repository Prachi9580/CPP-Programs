#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

int main()
{
    node *head = NULL, *temp, *newnode;
    int n, min;

    cout << "Enter number of nodes: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        newnode = new node;

        cout << "Enter data: ";
        cin >> newnode->data;

        newnode->next = NULL;

        if(head == NULL)
        {
            head = newnode;
            temp = head;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }

    min = head->data;
    temp = head;

    while(temp != NULL)
    {
        if(temp->data < min)
            min = temp->data;

        temp = temp->next;
    }

    cout << "Minimum element = " << min;

    return 0;
}
