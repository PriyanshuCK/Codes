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
    Node *prev;
    Node *next;

    // Constructor
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }

    // Destructor
    ~Node()
    {
        int val = this->val; // Can be used to print
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        if (this->prev != NULL)
        {
            delete prev;
            this->prev = NULL;
        }
        cout << "Deleted Node for value: " << val << endl;
    }
};
int getLength(Node *&head)
{
    Node *itr = head;
    int length = 0;
    while (itr != NULL)
    {
        itr = itr->next;
        length++;
    }
    return length;
}
void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
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
    Node *newNode = new Node(val);
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}
void insertAtPosition(Node *&head, Node *&tail, int pos, int val)
{
    if (pos == 1)
    {
        insertAtHead(head, val);
        return;
    }
    Node *newNode = new Node(val);
    Node *itr = head;
    pos--;
    while (--pos)
    {
        itr = itr->next;
    }
    if (itr->next == NULL)
    {
        insertAtTail(tail, val);
        return;
    }
    newNode->next = itr->next;
    itr->next = newNode;
    newNode->prev = itr;
    itr = newNode->next;
    itr->prev = newNode;
}
void deleteAtPosition(Node *&head, Node *&tail, int pos)
{
    if (pos == 1)
    {
        Node *current = head;
        head = current->next;
        head->prev = NULL;
        current->next = NULL;
        delete current;
        return;
    }
    if (pos == getLength(head))
    {
        Node *itr = head;
        pos--;
        while (--pos)
        {
            itr = itr->next;
        }
        Node *current = itr->next;
        itr->next = NULL;
        tail = itr;
        current->prev = NULL;
        delete current;
        return;
    }

    Node *itr = head;
    pos--;
    while (--pos)
    {
        itr = itr->next;
    }
    Node *current = itr->next;
    itr->next = current->next;
    current->next = NULL;
    itr = itr->next;
    itr->prev = current->prev;
    current->prev = NULL;
    delete current;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Node *node2 = new Node(5);
    cout << node2->val << endl;
    cout << node2->prev << endl;
    cout << node2->next << endl;
    Node *head = node2;
    Node *tail = node2;
    insertAtHead(head, 15);
    insertAtHead(head, 25);
    insertAtHead(head, 35);
    insertAtTail(tail, 0);
    insertAtTail(tail, 10);
    insertAtPosition(head, tail, 7, 20);
    deleteAtPosition(head, tail, 7);
    printList(head);
    cout << head->val << endl;
    cout << tail->val << endl;

    return 0;
}