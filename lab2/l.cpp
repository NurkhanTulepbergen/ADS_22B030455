#include <iostream>
#include <climits>
using namespace std;

// Linked list node structure
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

int findMaxSubarraySum(ListNode* head) {
    int maxEndingHere = head->val;  // Maximum sum ending at the current position
    int maxSoFar = head->val;      // Maximum sum found so far
    ListNode* current = head->next;

    while (current) {
        // Calculate the maximum sum ending at the current position
        maxEndingHere = max(current->val, maxEndingHere + current->val);

        // Update the maximum sum found so far
        maxSoFar = max(maxSoFar, maxEndingHere);

        // Move to the next node
        current = current->next;
    }

    return maxSoFar;
}

int main() {
    int n;
    cin >> n; // Number of elements in the linked list

    ListNode* head = nullptr;
    ListNode* current = nullptr;

    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        if (!head) {
            head = new ListNode(val);
            current = head;
        } else {
            current->next = new ListNode(val);
            current = current->next;
        }
    }

    if (!head) {
        cout << "0" << endl; // Empty linked list
    } else {
        int maxSum = findMaxSubarraySum(head);
        cout << maxSum << endl;
    }

    // Free memory by deleting the linked list nodes
    current = head;
    while (current) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}