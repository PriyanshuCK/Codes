// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node() : data(0), prev(nullptr), next(nullptr) {}
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
    Node(int val, Node *p, Node *n) : data(val), prev(p), next(n) {}
};

Node *deleteLastNode(Node *head)
{
    if (head->next == NULL)
    {
        return NULL;
    }
    Node *itr = head;
    while (itr->next->next != NULL)
    {
        itr = itr->next;
    }
    itr->next->prev = NULL;
    itr->next = NULL;
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