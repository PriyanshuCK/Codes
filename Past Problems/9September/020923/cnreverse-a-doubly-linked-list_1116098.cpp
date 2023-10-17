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
    Node()
    {
        this->data = 0;
        next = NULL;
        prev = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    Node(int data, Node *next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev = prev;
    }
};

Node *reverseDLL(Node *head)
{
    Node *itr = head;
    while (itr != NULL)
    {
        Node *temp = itr->prev;
        itr->prev = itr->next;
        itr->next = temp;
        if (itr->prev == NULL)
        {
            head = itr;
        }
        itr = itr->prev;
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
    Node *newNode = constructDLL(arr);
    Node *head = newNode;
    printList(head);
    head = reverseDLL(head);
    printList(head);
    return 0;
}