#include <iostream>
using namespace std;
#define N 5  // Stack size
int arr[N];  // Array to represent the stack
int top = -1;  // Index of the top element in the stack


bool isEmpty() {
    return top == -1;  // Returns true if the stack is empty
}


bool isFull() {
    return top == N - 1;  // Returns true if the stack is full
}


void push(int data) {
    if (isFull()) {
        cout << "Overflow";
        return;
    }
    top++;  // Increment the top index
    arr[top] = data;  // Store the data at the new top position
    cout << "\n Data insert success into the top of the stack: " << data;
}


int pop() {
    int r = -1;
    if (isEmpty()) {
        cout << "Underflow condition";
        return r;
    }
    r = arr[top];  // Store the top value in `r`
    top--;  // Decrease the top index
    return r;  // Return the popped value
}


int peek() {
    return arr[top];  // Returns the top element without removing it
}


void display() {
    if (isEmpty()) {
        cout << "\n Stack is Empty ";
        return;
    }
    for (int i = top; i >= 0; i--) {
        cout << "\n===> " << arr[i];  // Print elements from top to bottom
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();

    cout << "\n Delete Top Element of the Stack: " << pop();

    cout << "\n Top Element of The Stack: " << peek();
    cout << "\n\n Stack is Full: " << isFull();

    cout << "\n Delete Top Element of the Stack: " << pop();
    cout << "\n Delete Top Element of the Stack: " << pop();
    cout << "\n Delete Top Element of the Stack: " << pop();

    cout << "\n Stack is Empty or not: " << isEmpty();
    return 0;
}
