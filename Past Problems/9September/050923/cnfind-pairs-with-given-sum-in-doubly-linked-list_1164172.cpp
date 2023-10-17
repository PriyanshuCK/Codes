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
    Node *next, *prev;
    Node() : data(0), next(nullptr), prev(nullptr) {}
    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
    Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
};
vector<pair<int, int>> findPairs(Node *head, int k)
{
    unordered_set<int> nums;
    vector<pair<int, int>> sumPairs;
    Node *itr = head;
    while (itr != NULL)
    {
        if (nums.find(k - itr->data) != nums.end())
        {
            sumPairs.push_back({k - itr->data, itr->data});
        }
        else
        {
            nums.insert(itr->data);
        }
        itr = itr->next;
    }
    return sumPairs;
}
void insertAtTail(Node *&tail, int val)
{
    Node *newNode = new Node(val);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
Node *constructDLL(vector<int> &arr)
{
    Node *newNode = new Node(arr[0]);
    Node *tail = newNode;
    for (int i = 1; i < arr.size(); i++)
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
    int n, k;
    cin >> k;
    while (cin >> n)
    {
        arr.push_back(n);
    }
    Node *newNode = constructDLL(arr);
    printList(newNode);
    vector<pair<int, int>> v = findPairs(newNode, k);
    for (auto &&i : v)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}