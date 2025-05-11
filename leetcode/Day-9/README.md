# 1. Find Nth Digit

Given an integer `n`, return the `n`th digit of the infinite integer sequence:
123456789101112131415...


---

## Problem Understanding

This sequence is created by concatenating all positive integers.

### Example:
- For `n = 3` → the sequence is `123...` → answer = `3`
- For `n = 11` → sequence starts: `12345678910` → 11th digit is `0`

---

## Approach

We divide the sequence into **blocks of numbers** based on how many digits they have:

| Digit Length (i) | Start Number | Count of Numbers | Total Digits |
|------------------|--------------|------------------|---------------|
| 1                | 1            | 9                | 9 × 1 = 9     |
| 2                | 10           | 90               | 90 × 2 = 180  |
| 3                | 100          | 900              | 900 × 3 = 2700|

### ✨ Steps:
1. **Determine the digit length** `i` of the number in which the `n`th digit is.
2. **Find the actual number** that contains the digit.
3. **Get the digit** from that number.

---

## Code

```cpp
class Solution {
public:
    int findNthDigit(int n) {
        long long i = 1, count = 9, start = 1;
        while (n > i * count) {
            n -= i * count;
            count *= 10;
            start *= 10;
            i++;
        }
        long long num = start + (n - 1) / i;
        string s = to_string(num);
        return s[(n - 1) % i] - '0';
    }
};
```

# 2. Swap Nodes in a Linked List

This solution addresses the LeetCode problem **1721: Swap Nodes in a Linked List**, where the task is to swap the values of the k-th node from the beginning and the k-th node from the end of a singly linked list.

## 🧩 Problem Understanding

Given the head of a linked list and an integer `k`, return the head of the linked list after **swapping the values of the k-th node from the beginning and the k-th node from the end**.

### Example

Input: head = [1,2,3,4,5], k = 2
Output: [1,4,3,2,5]


---

## Approach

To efficiently solve the problem in a single traversal:

1. **Find the k-th node from the start:**
   - Use a pointer `fast` to move `k-1` times and land on the `k`-th node.
   - Save it as `first`.

2. **Find the k-th node from the end:**
   - Initialize another pointer `slow` at `head` and keep moving both `fast` and `slow` until `fast` reaches the end.
   - When `fast` hits `nullptr`, `slow` will be at the k-th node from the end.

3. **Swap the values:**
   - Simply swap `first->val` and `slow->val`.

This avoids the need to compute the length of the list explicitly.

---

## Code

```cpp
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* slow = head;
        ListNode* fast = head;

        // Step 1: Move `fast` to the k-th node
        for(int i = 1; i < k; i++) {
            fast = fast->next;
        }

        ListNode* first = fast;

        // Step 2: Move `fast` to end and `slow` in sync
        while(fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }

        // Step 3: Swap the values
        swap(first->val, slow->val);
        return head;
    }
};
```