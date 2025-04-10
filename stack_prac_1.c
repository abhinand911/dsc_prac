#include <stdio.h>
#define SIZE 100

int stack[SIZE];
int top = -1;

void push(int value) {
    if (top < SIZE - 1) {
        top++;
        stack[top] = value;
    } else {
        printf("Stack overflow! Cannot push %d\n", value);
    }
}

void pop() {
    if (top >= 0) {
        printf("Popped: %d\n", stack[top]);
        top--;
    } else {
        printf("Stack underflow! Cannot pop\n");
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    pop();
    pop();
    pop(); // Test underflow
    return 0;
}