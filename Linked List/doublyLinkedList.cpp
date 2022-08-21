#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;

    Node(int data)
    {
        this->prev = NULL;
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        cout << "Memory free for node containing value: " << value << endl;
    }
};

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

int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *&tail, Node *&head, int position, int data)
{
    // inserting at starting position
    if (position == 1)
    {
        insertAtHead(head, tail, data);
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
        insertAtTail(head, tail, data);
        return;
    }
    // creating node for data
    Node *newNodeToInsert = new Node(data);
    newNodeToInsert->next = temp->next;
    temp->next->prev = newNodeToInsert;
    temp->next = newNodeToInsert;
    newNodeToInsert->prev = temp;
}

void deleteNodeByPosition(int position, Node *&head, Node *&tail)
{
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
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
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    // Node* node1 = new Node(10);
    Node *head = NULL;
    Node *tail = NULL;
    // cout<<"Length of Linked List: "<<getLength(head);
    insertAtHead(head, tail, 11);
    print(head);
    insertAtHead(head, tail, 12);
    print(head);
    insertAtTail(tail, tail, 19);
    print(head);
    insertAtPosition(tail, head, 2, 15);
    print(head);
    // deleteNodeByPosition(2, head, tail);
    // print(head);
    // cout << "tail: " << tail->data;
    
    return 0;
}