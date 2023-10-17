// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
struct Node
{
    int value;
    Node *prev;
    Node *next;
    Node() : value(0), prev(nullptr), next(nullptr) {}
    Node(int val) : value(val), prev(nullptr), next(nullptr) {}
    Node(int val, Node *p, Node *n) : value(val), prev(p), next(n) {}
};

Node *insertAtTail(Node *head, int k)
{
    if (head == NULL)
    {
        Node *newNode = new Node(k);
        head = newNode;
        return head;
    }

    Node *itr = head;
    Node *newNode = new Node(k);
    while (itr->next != NULL)
    {
        itr = itr->next;
    }
    itr->next = newNode;
    newNode->prev = itr;
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