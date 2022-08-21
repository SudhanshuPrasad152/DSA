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

void insertData(Node *&tail, int element, int data)
{

    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non-empty list
        // assuming that element is present in list
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found curr is representing element's Node
        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *&tail)
{

    Node *temp = tail;
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void deleteNode(Node *&tail, int element)
{
    if (tail == NULL)
    {
        cout << "List is empty please enter elements" << endl;
    }
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;
        while (curr->data != element)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        if (curr == prev)
        {
            tail = NULL;
        }
        else if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }
    map<Node*, bool> visited;
        Node* temp = head;
        while(temp != NULL){
            if(visited[temp] == true){
                return true;
            }
            visited[temp] = true;
            temp = temp->next;
        }
        return false;
}

int main()
{

    Node *tail = NULL;
    insertData(tail, 0, 3);
    print(tail);

    insertData(tail, 3, 4);
    print(tail);

    insertData(tail, 4, 5);
    print(tail);

    insertData(tail, 3, 2);
    print(tail);

    insertData(tail, 5, 6);
    print(tail);

    // deleteNode(tail, 5);
    // print(tail);

    cout<<detectLoop(tail);
    return 0;
}