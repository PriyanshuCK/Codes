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
bool hasCycle(ListNode *head)
{
    ListNode *slow = head, *fast = head;
    int count = 0;
    while (slow != NULL)
    {
        if (slow == fast && count != 0)
        {
            return true;
        }
        slow = slow->next;
        if (fast == NULL || fast->next == NULL)
        {
            return false;
        }
        fast = fast->next->next;
        count = 1;
    }
    return false;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    return 0;
}