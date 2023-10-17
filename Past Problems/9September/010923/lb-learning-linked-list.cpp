// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
class Node
{
public:
    int val;
    Node *next;

    // constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->val;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};
void insertAtHead(Node *&head, int val)
{
    Node *tempNode = new Node(val);
    tempNode->next = head;
    head = tempNode;
}
void printList(Node *&head)
{
    Node *itr = head;
    while (itr != NULL)
    {
        cout << itr->val << " ";
        itr = itr->next;
    }
    cout << endl;
}
void insertAtTail(Node *&tail, int val)
{
    Node *itr = tail;
    Node *tempNode = new Node(val);
    itr->next = tempNode;
}
void insertAtPosition(Node *&head, int pos, int val)
{
    Node *tempNode = new Node(val);
    Node *itr = head;
    if (pos == 1)
    {
        insertAtHead(head, val);
        return;
    }

    pos--;
    while (--pos)
    {
        itr = itr->next;
    }
    tempNode->next = itr->next;
    itr->next = tempNode;
}
void deleteNode(Node *&head, int pos)
{
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    pos--;
    Node *itr = head;
    while (--pos)
    {
        itr = itr->next;
    }
    Node *current = itr->next;
    itr->next = current->next;
    current->next = NULL;
    delete current;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Node *node1 = new Node(10);
    cout << node1->val << endl;
    cout << node1->next << endl;
    Node *head = node1;
    Node *tail = node1;
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtTail(tail, 50);
    insertAtPosition(head, 3, 25);
    deleteNode(head, 6);
    printList(head);
    return 0;
}