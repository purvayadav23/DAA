#include <stdio.h>
#include <stdlib.h>
// Node structure
struct Node {
int data;
struct Node* next;
};
// Function to create a new node
struct Node* newNode(int data) {struct Node* node = (struct Node*)malloc(sizeof(struct Node));
node->data = data;
 node->next = NULL;
return node;
}
// Detect cycle using Floyd’s algorithm
int hasCycle(struct Node* head) {
struct Node *slow = head, *fast = head;
while (fast != NULL && fast->next != NULL) {
slow = slow->next;           // move 1 step
fast = fast->next->next;     // move 2 steps
if (slow == fast) {
return 1;  // cycle detected
}
}
return 0;  // no cycle
}
int main() {
int n, i, pos;
printf("Enter number of nodes: ");
scanf("%d", &n);
if (n <= 0) {
printf("Empty list\n");
return 0;
}
struct Node *head = NULL, *tail = NULL, *temp, *cycleNode = NULL;
printf("Enter %d node values:\n", n);
for (i = 0; i < n; i++) {
int val;
scanf("%d", &val);
temp = newNode(val);
if (head == NULL) {
head = temp;
tail = temp;
} else {
tail->next = temp;
tail = temp;
}
if (i == 0) cycleNode = head;  // just in case user chooses position 1
}
// Ask user if they want to create a cycle
printf("Enter position to link last node to (0 for no cycle, 1..n for cycle): ");
scanf("%d", &pos);
if (pos > 0 && pos <= n) {
cycleNode = head;
for (i = 1; i < pos; i++) {
cycleNode = cycleNode->next;
}
tail->next = cycleNode;  // create cycle
}
if (hasCycle(head))
printf("Cycle detected\n");
else
printf("No cycle\n");
    return 0;
}
