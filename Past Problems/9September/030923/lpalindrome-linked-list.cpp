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
ListNode *reverseList(ListNode *head)
{
    ListNode *itr = head;
    ListNode *prev = NULL;
    while (itr != NULL)
    {
        ListNode *temp = itr->next;
        if (itr->next == NULL)
        {
            head = itr;
        }
        itr->next = prev;
        prev = itr;
        itr = temp;
    }
    return head;
}
ListNode *middleNode(ListNode *head)
{
    ListNode *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
bool isPalindrome(ListNode *head)
{
    ListNode *left = head, *right = head;
    right = middleNode(right);
    right = reverseList(right);
    ListNode *start = right;
    while ((left != NULL && right != NULL) && (left->val == right->val && left != start))
    {
        left = left->next;
        right = right->next;
    }
    if ((left != NULL && right != NULL) && (left != start && left->val != right->val))
    {
        return false;
    }
    return true;
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
    cout << isPalindrome(newNode);
    return 0;
}