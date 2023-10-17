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
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
int lengthOfLoop(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    Node *slow = head, *fast = head, *entry = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            break;
        }
    }
    if (fast->next != NULL && fast->next->next != NULL)
    {
        int length = 1;
        while (entry != slow)
        {
            entry = entry->next;
            slow = slow->next;
        }
        entry = entry->next;
        while (entry != slow)
        {
            entry = entry->next;
            length++;
        }
        return length;
    }
    return 0;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    return 0;
}