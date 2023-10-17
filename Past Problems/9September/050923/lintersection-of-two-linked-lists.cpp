// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    ListNode *itrA = headA, *itrB = headB;
    while (itrA != NULL && itrB != NULL)
    {
        itrA = itrA->next;
        itrB = itrB->next;
    }
    int count = 0, isAshorter = 1;
    while (itrA != NULL)
    {
        itrA = itrA->next;
        count++;
        isAshorter = 0;
    }
    while (itrB != NULL)
    {
        itrB = itrB->next;
        count++;
    }
    if (isAshorter)
    {
        itrA = headA, itrB = headB;
        while (count--)
        {
            itrB = itrB->next;
        }
        while (itrA != itrB && itrA != NULL)
        {
            itrA = itrA->next;
            itrB = itrB->next;
        }
        return itrA;
    }
    itrA = headA, itrB = headB;
    while (count--)
    {
        itrA = itrA->next;
    }
    while (itrA != itrB && itrA != NULL)
    {
        itrA = itrA->next;
        itrB = itrB->next;
    }
    return itrA;
}
void insertAtTail(ListNode *&tail, int val)
{
    ListNode *newListNode = new ListNode(val);
    tail->next = newListNode;
    tail = newListNode;
}
ListNode *constructLL(vector<int> &arr)
{
    ListNode *newListNode = new ListNode(arr[0]);
    ListNode *tail = newListNode;
    for (int i = 1; i < (int)arr.size(); i++)
    {
        insertAtTail(tail, arr[i]);
    }
    return newListNode;
}
void printList(ListNode *&head)
{
    ListNode *itr = head;
    while (itr != NULL)
    {
        cout << itr->val << " ";
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