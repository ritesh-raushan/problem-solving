# 1. Bulb Switcher

## Problem Statement

There are `n` bulbs that are initially off. You perform a series of operations:

- In the 1st round, you toggle every bulb.
- In the 2nd round, you toggle every 2nd bulb.
- In the 3rd round, every 3rd bulb, and so on until the `n`th round.

Return the number of bulbs that are on after `n` rounds.

## Approach

The key observation is:

- A bulb ends up **on** only if it's toggled **odd** number of times.
- A bulb at position `i` is toggled once for each of its divisors.
- So, if a number has an **odd number of divisors**, it will be on.

-> Only **perfect squares** have an odd number of divisors!

Hence, the number of bulbs that are on after `n` rounds is the **count of perfect squares ≤ n**, i.e., `floor(sqrt(n))`.

## Example

Input: n = 10
Perfect squares ≤ 10: 1, 4, 9
Output: 3

## Code

```cpp
class Solution {
public:
    int bulbSwitch(int n) {
        return sqrt(n);
    }
};
```
## Complexity

- Time Complexity: O(1)
- Space Complexity: O(1)

---

# 2. Delete the Middle Node of a Linked List

## Problem Statement


Given the head of a singly linked list, **delete the middle node**, and return the head of the modified list.

- If there are two middle nodes, delete the **second** one.
- If the list has only one node, return `nullptr`.

## Approach

We can find the middle of the linked list using the **slow and fast pointer** technique:

- `slow` moves one step at a time.
- `fast` moves two steps at a time.
- When `fast` reaches the end, `slow` will be at the **middle**.

To delete the middle node, we keep a **`prev` pointer** that tracks the node just before `slow`, and set `prev->next = slow->next`.


## Example

Input: [1, 2, 3, 4, 5]
Middle: 3
Output: [1, 2, 4, 5]

## Code

```cpp
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) return nullptr;

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;
        
        while(fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        prev->next = slow->next;
        delete slow;
        return head;
    }
};
```

## Complexity

- Time Complexity: O(n)
- Space Complexity: O(1)

---