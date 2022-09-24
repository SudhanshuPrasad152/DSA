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
        cout << "Memory freed" << endl;
    }
};

class Stack
{
public:
    Node *top = NULL;

    void push(int element)
    {
        Node *temp = new Node(element);
        temp->next = top;
        top = temp;
    }

    void pop()
    {
        Node *temp;
        if (top == NULL)
        {
            cout << "Stack Underflow!" << endl;
        }
        else
        {
            temp = top;
            top = top->next;
            delete temp;
        }
    }

    bool isEmpty()
    {
        if (top == NULL)
        {
            return true;
        }
        return false;
    }

    int peek()
    {
        if (!isEmpty())
        {
            return top->data;
        }
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }
};

int main()
{
    Stack st;
    st.push(23);
    st.push(25);
    st.push(27);

    cout << "Top Element: " << st.peek() << endl;
    st.pop();
    cout << "Top Element: " << st.peek() << endl;
    st.pop();
    cout << "Top Element: " << st.peek() << endl;
    st.pop();
    cout << "Top Element: " << st.peek() << endl;

    return 0;
}