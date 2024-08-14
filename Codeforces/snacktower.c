#include <stdio.h>

#define MAX_SIZE 100000

// Define a stack structure
typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;

// Function to initialize the stack
void initialize(Stack *s) {
    s->top = -1;
}

// Function to check if the stack is empty
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Function to push an item onto the stack
void push(Stack *s, int value) {
    s->items[++s->top] = value;
}

// Function to pop an item from the stack
int pop(Stack *s) {
    return s->items[s->top--];
}

int main() {
    Stack tower; // Declare the stack for the tower
    initialize(&tower); // Initialize the stack

    int n;
    scanf("%d", &n); // Input the total number of snacks

    int snacks[MAX_SIZE]; // Array to store the sizes of snacks
    for (int i = 0; i < n; i++) {
        scanf("%d", &snacks[i]); // Input the size of each snack
    }

    int placed[MAX_SIZE]; // Array to store placed snacks
    int placedIndex = 0; // Index to track placed snacks

    // Iterate through each snack falling each day
    for (int i = 0; i < n; i++) {
        // Check if the snack can be placed immediately
        while (!isEmpty(&tower) && tower.items[tower.top] < snacks[i]) {
            placed[placedIndex++] = pop(&tower); // Place bigger snacks onto the tower
        }
        push(&tower, snacks[i]); // Place the current snack onto the tower
        while (placedIndex > 0) {
            printf("%d ", placed[--placedIndex]); // Print placed snacks in reverse order
        }
        printf("\n"); // Print empty line for days when no snack is placed
    }

    return 0;
}
