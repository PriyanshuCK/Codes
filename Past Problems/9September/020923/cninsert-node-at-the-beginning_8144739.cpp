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
    Node *next;
    Node() : data(0), next(nullptr) {}
    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node *next) : data(x), next(next) {}
};
Node *insertAtFirst(Node *list, int newValue)
{
    Node *newNode = new Node(newValue);
    newNode->next = list;
    list = newNode;
    return list;
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
    return 0;
}