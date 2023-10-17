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
void insertAtTail(ListNode *&tail, int val)
{
    ListNode *newListNode = new ListNode(val);
    tail->next = newListNode;
    tail = newListNode;
}
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *sumHead = new ListNode(), *itr1 = l1, *itr2 = l2, *sum = sumHead;
    int carry = 0;
    while (itr1 != NULL && itr2 != NULL)
    {
        int num = itr1->val + itr2->val + carry;
        num > 9 ? carry = 1 : carry = 0;
        num %= 10;
        ListNode *digit = new ListNode(num);
        sum->next = digit;
        sum = sum->next;
        itr1 = itr1->next;
        itr2 = itr2->next;
    }
    while (itr1 != NULL)
    {
        int num = itr1->val + carry;
        num > 9 ? carry = 1 : carry = 0;
        num %= 10;
        ListNode *digit = new ListNode(num);
        sum->next = digit;
        sum = sum->next;
        itr1 = itr1->next;
    }
    while (itr2 != NULL)
    {
        int num = itr2->val + carry;
        num > 9 ? carry = 1 : carry = 0;
        num %= 10;
        ListNode *digit = new ListNode(num);
        sum->next = digit;
        sum = sum->next;
        itr2 = itr2->next;
    }
    sumHead = sumHead->next;
    if (carry)
    {
        insertAtTail(sum, 1);
    }
    return sumHead;
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