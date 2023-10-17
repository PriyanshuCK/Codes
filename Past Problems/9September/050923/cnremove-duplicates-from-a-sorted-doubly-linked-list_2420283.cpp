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
    Node *next, *prev;
    Node() : data(0), next(nullptr), prev(nullptr) {}
    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
    Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
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
Node *removeDuplicates(Node *head)
{
    int prev = head->data;
    Node *itr = head;
    while (itr != NULL)
    {
        if (itr != head && itr->data == prev)
        {
            deleteNode(head, itr);
            continue;
        }
        prev = itr->data;
        itr = itr->next;
    }
    return head;
}
void insertAtTail(Node *&tail, int val)
{
    Node *newNode = new Node(val);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
Node *constructDLL(vector<int> &arr)
{
    Node *newNode = new Node(arr[0]);
    Node *tail = newNode;
    for (int i = 1; i < arr.size(); i++)
    {
        insertAtTail(tail, arr[i]);
    }
    return newNode;
}
void printList(Node *&head)
{
    Node *itr = head;
    while (itr != NULL)
    {
        cout << itr->data << " ";
        itr = itr->next;
    }
    cout << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> arr;
    int n;
    while (cin >> n)
    {
        arr.push_back(n);
    }
    Node *newNode = constructDLL(arr);
    printList(newNode);
    newNode = removeDuplicates(newNode);
    printList(newNode);
    return 0;
}