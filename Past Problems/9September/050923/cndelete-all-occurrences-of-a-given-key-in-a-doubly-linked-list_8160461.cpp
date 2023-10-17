// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data, Node *next, Node *prev)
    {
        this->data = data;
        this->prev = prev;
        this->next = next;
    }
};
void deleteNode(Node *&head, Node *&node)
{
    if (node->prev == NULL && node->next == NULL)
    {
        head = NULL;
        node = head;
        return;
    }
    if (node == head)
    {
        node->next->prev = NULL;
        head = node->next;
        node = head;
        return;
    }
    if (node->next == NULL)
    {
        node->prev->next = NULL;
        node = NULL;
        return;
    }
    node->prev->next = node->next;
    node->next->prev = node->prev;
    node = node->next;
}
Node *deleteAllOccurrences(Node *head, int k)
{
    Node *itr = head;
    while (itr != NULL)
    {
        if (itr->data == k)
        {
            deleteNode(head, itr);
            continue;
        }
        itr = itr->next;
    }
    return head;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    return 0;
}