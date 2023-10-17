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
Node *sortList(Node *head)
{
    Node *zeroesHead = new Node();
    Node *zeroes = zeroesHead;
    Node *onesHead = new Node();
    Node *ones = onesHead;
    Node *twosHead = new Node();
    Node *twos = twosHead;
    Node *itr = head;
    while (itr != NULL)
    {
        if (itr->data == 0)
        {
            zeroes->next = itr;
            zeroes = zeroes->next;
        }
        else if (itr->data == 1)
        {
            ones->next = itr;
            ones = ones->next;
        }
        else
        {
            twos->next = itr;
            twos = twos->next;
        }
        itr = itr->next;
    }
    if (onesHead->next != NULL)
    {
        zeroes->next = onesHead->next;
    }
    else
    {
        zeroes->next = twosHead->next;
    }
    ones->next = twosHead->next;
    twos->next = NULL;
    delete onesHead;
    delete twosHead;
    return zeroesHead->next;
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
    newNode = sortList(newNode);
    printList(newNode);
    return 0;
}