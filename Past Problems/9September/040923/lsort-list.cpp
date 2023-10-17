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
ListNode *middleNode(ListNode *head)
{
    ListNode *temp = new ListNode();
    temp->next = head;
    ListNode *slow = temp, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    if (fast != NULL)
    {
        return slow->next;
    }

    return slow;
}
ListNode *merge(ListNode *left, ListNode *right)
{
    if (left == NULL)
    {
        return right;
    }
    if (right == NULL)
    {
        return left;
    }
    ListNode *head = new ListNode();
    ListNode *mergedList = head;
    while (left != NULL && right != NULL)
    {
        if (left->val <= right->val)
        {
            mergedList->next = left;
            mergedList = mergedList->next;
            left = left->next;
        }
        else
        {
            mergedList->next = right;
            mergedList = mergedList->next;
            right = right->next;
        }
    }
    while (left != NULL)
    {
        mergedList->next = left;
        mergedList = mergedList->next;
        left = left->next;
    }
    while (right != NULL)
    {
        mergedList->next = right;
        mergedList = mergedList->next;
        right = right->next;
    }
    return head->next;
}
ListNode *mergeSort(ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    ListNode *left = head, *mid = middleNode(head), *right = mid->next;
    mid->next = NULL;
    left = mergeSort(left), right = mergeSort(right);
    return merge(left, right);
}
ListNode *sortList(ListNode *head)
{
    return mergeSort(head);
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
    newNode = sortList(newNode);
    printList(newNode);
    return 0;
}