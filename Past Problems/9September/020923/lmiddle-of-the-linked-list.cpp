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
    int count = 0;
    ListNode *itr = head;
    int pos = getLength(head) / 2 + 1;
    while (itr != NULL)
    {
        count++;
        if (count == pos)
        {
            return itr;
        }
        itr = itr->next;
    }
}
int getLength(ListNode *head)
{
    int length = 0;
    ListNode *itr = head;
    while (itr != NULL)
    {
        length++;
        itr = itr->next;
    }
    return length;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    return 0;
}