#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "Enter Node data" << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for inserting in left part of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for inserting in right part of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // previous level is completely traversed
            cout << endl;
            if (!q.empty())
            {
                // queue has still some child nodes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void reverselevelOrderTraversal(node *root)
{
    queue<node *> q;
    stack<node *> s;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // previous level is completely traversed

            if (!q.empty())
            {
                // queue has still some child nodes
                s.push(NULL);
                q.push(NULL);
            }
        }
        else
        {
            s.push(temp);
            if (temp->right)
            {
                q.push(temp->right);
            }
            if (temp->left)
            {
                q.push(temp->left);
            }
        }
    }

    while (!s.empty())
    {
        node *temp = s.top();
        s.pop();
        if (temp == NULL)
        {
            cout << endl;
        }
        else
        {
            cout << temp->data << " ";
        }
    }
}

void inOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void morrisTraversal(node* root){
    if(root == NULL){
        return;
    }
    node* pre;
    node* current = root;
    while(current!= NULL){
        if(current->left == NULL){
            cout<<current->data<<" ";
            current = current->right;
        }
        else{
            pre = current->left;
            while(pre->right != NULL && pre->right != current){
                pre = pre->right;
            }
            if(pre->right == NULL){
                pre->right = current;
                current = current->left;
            }
            else{
                pre->right = NULL;
                cout<<current->data<<" ";
                current = current->right;
            }
        }
    }
}

int main()
{
    node *root = NULL;

    // creating Binary Tree
    root = buildTree(root);
    // printing the Binary Tree
    // levelOrderTraversal(root);
    // reverselevelOrderTraversal(root);
    // inOrder(root);
    // preOrder(root);
    // postOrder(root);
    morrisTraversal(root);
    return 0;
}

// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1