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

class LinkedList
{
public:
    node *head;

    LinkedList()
    {
        this->head = NULL;
    }

    void appendLinkedList(node *newNode)
    {
        node *current = this->head;

        if (current == NULL)
        {
            this->head = newNode;
        }
        else
        {
            while (current->next != NULL)
            {
                current = current->next;
            }

            current->next = newNode;
        }
    }

    void insert(node *newNode, int index)
    {
        node *current = this->head;

        if (index == 0)
        {
            newNode->next = current;
            this->head = newNode;
        }
        else
        {
            for (int i = 0; i < index - 1 && current != NULL; i++)
            {
                current = current->next;
            }

            if (current != NULL)
            {
                newNode->next = current->next;
                current->next = newNode;
            }
        }
    }

    int deletion(int index)
    {
        node *current = this->head;

        node *prev = NULL;

        int deletedValue = -1;

        if (index == 0)
        {
            deletedValue = this->head->data;
            this->head = this->head->next;
            return deletedValue;
        }
        else
        {
            for (int i = 0; i < index && current != NULL; i++)
            {
                current = current->next;
                prev = current;
            }

            if (current != NULL)
            {
                deletedValue = current->data;
                prev->next = current->next;
            }
            return deletedValue;
        }
    }

    void displayLinkedList()
    {
        node *current = this->head;

        while (current != NULL)
        {
            cout << current->data;
        }
    }
};