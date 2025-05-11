#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* slow = head;
        ListNode* fast = head;
        for (int i = 1; i < k; i++) {
            fast = fast->next;
        }

        ListNode* first = fast;
        while (fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }

        swap(first->val, slow->val);
        return head;
    }
};

// Helper function to create a linked list from an array
ListNode* createList(int arr[], int size) {
    if (size == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for (int i = 1; i < size; i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

// Helper function to print linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n, k;
    cout << "Enter number of nodes: ";
    cin >> n;
    int arr[n];
    cout << "Enter node values: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter k: ";
    cin >> k;

    ListNode* head = createList(arr, n);
    Solution sol;
    head = sol.swapNodes(head, k);
    cout << "Modified list: ";
    printList(head);

    return 0;
}