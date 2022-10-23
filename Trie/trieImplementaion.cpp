#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *childeren[26];
    bool isTerminal;
    TrieNode(char data)
    {
        this->data = data;
        for (int i = 0; i < 25; i++)
        {
            childeren[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie
{
public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        // Assumption is that word is in CAPS
        int index = word[0] - 'A';
        TrieNode *child;

        // if it is present
        if (root->childeren[index] != NULL)
        {
            child = root->childeren[index];
        }
        // if not present
        else
        {
            child = new TrieNode(word[0]);
            root->childeren[index] = child;
        }
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode *child;
        if (root->childeren[index] != NULL)
        {
            child = root->childeren[index];
        }
        else
        {
            return false;
        }
        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word)
    {
        return searchUtil(root, word);
    }

    void removeUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            root->isTerminal = false;
            return;
        }

        int index = word[0] - 'A';
        TrieNode *child;
        if (root->childeren[index] != NULL)
        {
            child = root->childeren[index];
        }
        else
        {
            return;
        }
        removeUtil(child, word.substr(1));
    }

    void removeWord(string word)
    {
        removeUtil(root, word);
    }
};

int main()
{
    Trie *t = new Trie();
    t->insertWord("ABCD");
    cout << "Present or Not " << t->searchWord("ABCD") << endl;
    t->removeWord("ABCD");
    cout << "Present or Not " << t->searchWord("ABCD") << endl;
    t->removeWord("DF");
    cout << "Present or Not " << t->searchWord("ABCD") << endl;
    return 0;
}