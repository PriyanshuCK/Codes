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

    Node(int val) : val(val), next(NULL) {}
    ~Node()
    {
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};
class MyLinkedList
{
public:
    Node *head;
    int size;

    MyLinkedList() : head(NULL), size(0) {}

    int get(int index)
    {
        if (index > size - 1 || index < 0)
        {
            return -1;
        }
        Node *itr = head;
        while (index--)
        {
            itr = itr->next;
        }
        return itr->val;
    }

    void addAtHead(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        size++;
    }

    void addAtTail(int val)
    {
        Node *itr = head;
        Node *newNode = new Node(val);
        if (itr == NULL)
        {
            head = newNode;
            size++;
            return;
        }
        while (itr->next != NULL)
        {
            itr = itr->next;
        }
        itr->next = newNode;
        size++;
    }

    void addAtIndex(int index, int val)
    {
        if (index == 0)
        {
            addAtHead(val);
            return;
        }
        if (index == size)
        {
            addAtTail(val);
            return;
        }
        if (index > size)
        {
            return;
        }
        Node *itr = head;
        while (--index)
        {
            itr = itr->next;
        }
        Node *newNode = new Node(val);
        newNode->next = itr->next;
        itr->next = newNode;
        size++;
    }

    void deleteAtIndex(int index)
    {
        if (index == 0)
        {
            Node *current = head;
            head = current->next;
            current->next = NULL;
            delete current;
            size--;
            return;
        }
        if (index > size - 1)
        {
            return;
        }

        Node *itr = head;
        while (--index)
        {
            itr = itr->next;
        }
        Node *current = itr->next;
        itr->next = current->next;
        current->next = NULL;
        delete current;
        size--;
    }

    void printList()
    {
        Node *itr = head;
        while (itr != NULL)
        {
            cout << itr->val << " ";
            itr = itr->next;
        }
        cout << endl;
    }
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    MyLinkedList *obj = new MyLinkedList();
    obj->addAtHead(2);
    cout << obj->get(0) << endl;
    obj->printList();
    cout << obj->size << endl;
    cout << obj->head->val << endl;
    return 0;
}