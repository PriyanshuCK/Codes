// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
struct Node
{
    int data;
    Node *next;
    Node() : data(0), next(nullptr) {}
    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node *next) : data(x), next(next) {}
};
void insertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}
Node *addOne(Node *head)
{
    Node *itr = head;
    bool allNine = true, lastNine = false;
    while (itr != NULL)
    {
        if (itr->data != 9)
        {
            allNine = false;
        }
        if (itr->next == NULL && itr->data == 9)
        {
            lastNine = true;
        }
        itr = itr->next;
    }
    if (allNine)
    {
        itr = head;
        while (itr != NULL)
        {
            itr->data = 0;
            itr = itr->next;
        }
        insertAtHead(head, 1);
        return head;
    }
    if (lastNine)
    {
        itr = head;
        while (itr->next != NULL && itr->next->next != NULL)
        {
            itr = itr->next;
        }
        itr->data += 1;
        itr = itr->next;
        itr->data = 0;
        return head;
    }
    itr = head;
    while (itr->next != NULL)
    {
        itr = itr->next;
    }
    itr->data += 1;
    return head;
}
void insertAtTail(Node *&tail, int data)
{
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}
Node *constructLL(vector<int> &arr)
{
    Node *newNode = new Node(arr[0]);
    Node *tail = newNode;
    for (int i = 1; i < (int)arr.size(); i++)
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
    Node *newNode = constructLL(arr);
    printList(newNode);
    newNode = addOne(newNode);
    printList(newNode);
    return 0;
}