#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        cout << "memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node *&head, int data)
{
    // creating node for data
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    // creating node for data
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int data)
{
    // inserting at starting position
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    // insertiing at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    // creating node for data
    Node *newNodeToInsert = new Node(data);
    newNodeToInsert->next = temp->next;
    temp->next = newNodeToInsert;
}

void deleteNodeByPosition(int position, Node *&head, Node *&tail)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        if (curr->next == NULL)
        {
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void deleteNodeByValue(int value, Node *&head, Node *&tail)
{
    if (value == head->data)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        if (curr->next == NULL)
        {
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertAtTail(tail, 20);
    print(head);
    insertAtTail(tail, 15);
    print(head);
    insertAtPosition(tail, head, 4, 30);
    print(head);
    deleteNodeByPosition(3, head, tail);
    print(head);
    cout << "tail: " << tail->data;
    return 0;
}