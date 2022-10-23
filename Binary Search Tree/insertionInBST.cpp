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

node *createBST(node *root, int data)
{
    if (root == NULL)
    {
        root = new node(data);
        return root;
    }

    if (data > root->data)
    {
        root->right = createBST(root->right, data);
    }
    else
    {
        root->left = createBST(root->left, data);
    }
    return root;
}

void insertBST(node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = createBST(root, data);
        cin >> data;
    }
}

int minEle(node *root)
{
    node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp->data;
}

int maxEle(node *root)
{
    node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp->data;
}

node *deleteFromBST(node *root, int val)
{
    if (root == NULL)
    {
        return root;
    }

    if (root->data == val)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1 child
        // left child is present
        if (root->left != NULL && root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        // right child is present
        if (root->left == NULL && root->right != NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }
        // 2 child
        if (root->left != NULL && root->right != NULL)
        {
            int mini = minEle(root->right);
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        }
    }
    else if (root->data > val)
    {
        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else
    {
        root->right = deleteFromBST(root->right, val);
        return root;
    }
}

void inorderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main()
{
    cout << "Enter data" << endl;
    node *root = NULL;
    insertBST(root);
    inorderTraversal(root);
    root = deleteFromBST(root, 10);
    cout << endl;
    inorderTraversal(root);
    return 0;
}

// 10 8 21 7 27 5 4 3 -1