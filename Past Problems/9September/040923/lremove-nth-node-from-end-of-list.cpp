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
void deleteNode(ListNode *node)
{
    if (node->next == NULL)
    {
        node = NULL;
        return;
    }
    node->val = node->next->val;
    node->next = node->next->next;
}
ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode *temp = new ListNode();
    temp->next = head;
    ListNode *fast = temp, *slow = temp;
    while (n--)
    {
        fast = fast->next;
    }
    while (fast != NULL)
    {
        fast = fast->next;
        if (slow->next->next == NULL)
        {
            if (slow->next == head)
            {
                return NULL;
            }
            slow->next = NULL;
            return head;
        }
        slow = slow->next;
    }
    deleteNode(slow);
    return head;
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
    vector<int> arr;
    int n;
    while (cin >> n)
    {
        arr.push_back(n);
    }
    ListNode *newNode = constructLL(arr);
    printList(newNode);
    newNode = removeNthFromEnd(newNode, 1);
    printList(newNode);
    return 0;
}