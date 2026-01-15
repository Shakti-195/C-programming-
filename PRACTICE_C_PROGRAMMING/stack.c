#include <stdio.h>

#define MAX 5  // Maximum size of the stack

int stack[MAX];  // Stack array
int top = -1;    // Initialize top of stack to -1 (empty stack)

void push() {
    int n, item;
    printf("Enter the number of elements to insert: ");
    scanf("%d", &n);

    if (top + n >= MAX) {
        printf("Stack Overflow: Not enough space for %d elements.\n", n);
        return;
    }

    printf("Enter %d elements separated by spaces: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &item);
        top++;
        stack[top] = item;
        printf("Element %d inserted at position %d\n", item, top);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push();  // Call push function to insert elements
    display();  // Display the current elements in the stack
    return 0;
}
