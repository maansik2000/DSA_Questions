#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertNode(node *&head, int data)
{
    node *newNode = new node(data);

    if (head == NULL)
    {
        head == newNode;
        return;
    }

    node *current = head;

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = newNode;
}

void printList(node *head)
{
    while (head->next != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << head->data << "\n";
}

node *getNode(node *head, int data)
{
    while (head->data != data)
    {
        head = head->next;
    }

    return head;
}

void deleteNode(node *t)
{
    t->data = t->next->data;
    t->next = t->next->next;
}

int main()
{
    node *head = NULL;

    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 3);
    insertNode(head, 4);
    insertNode(head, 5);

    printList(head);

    node *t = getNode(head, 3);

    deleteNode(t);
}