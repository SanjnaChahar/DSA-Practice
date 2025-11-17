#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int x) {
        val = x;
        next = NULL;
    }
};

// Recursive function to add 1
int addRec(Node* node) {
    if (node == NULL) return 1;   // Base case: add 1 when we reach the end

    int carry = addRec(node->next);
    int sum = node->val + carry;
    node->val = sum % 10;
    return sum / 10;
}

// Function to add 1 to the linked list
Node* addOne(Node* head) {
    int carry = addRec(head);

    // If carry is still left, create new head
    if (carry) {
        Node* newHead = new Node(carry);
        newHead->next = head;
        return newHead;
    }
    return head;
}

// Utility function to print the list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// MAIN function (VS Code run directly)
int main() {

    // Creating linked list: 1 -> 2 -> 9 -> 9
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(9);
    head->next->next->next = new Node(9);

    cout << "Original List: ";
    printList(head);

    head = addOne(head);

    cout << "After Adding 1: ";
    printList(head);

    return 0;
}
