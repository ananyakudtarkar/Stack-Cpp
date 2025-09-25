#include <iostream>
using namespace std;
#define SIZE 5

class Stack {
    int arr[SIZE];
    int top; // Index of the topmost element

public:
    // Constructor to initialize the stack
    Stack() {
        top = -1; // -1 indicates the stack is empty
    }

    // Push operation to add an element to the top
    void push(int value) {
        if (top == SIZE - 1) {
            cout << "Stack Overflow! Cannot push " << value << ". Stack is full.\n";
            return;
        }
        // Increment top and then insert the value
        arr[++top] = value;
        cout << value << " Pushed onto stack.\n";
    }

    // Pop operation to remove the element from the top
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow! Cannot pop from an empty stack.\n";
            return;
        }
        // Store the value before decrementing top
        cout << arr[top] << " Popped from stack.\n";
        top--; // Decrement top to remove the element
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is empty. No top element to peek.\n";
            return;
        }
        cout << "Top element is: " << arr[top] << ".\n";
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "Stack elements (Top to Bottom): \n";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


int main() {

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    s.display();
    s.peek();

    s.pop(); 
    s.pop(); 
    s.display();

    s.pop();
    s.pop();
    s.pop();
    s.pop(); 

    s.display(); 

    return 0;
}

/*
OUTPUT
10 Pushed onto stack.
20 Pushed onto stack.
30 Pushed onto stack.
40 Pushed onto stack.
50 Pushed onto stack.
Stack Overflow! Cannot push 60. Stack is full.
Stack elements (Top to Bottom): 
50 40 30 20 10 
Top element is: 50.
50 Popped from stack.
40 Popped from stack.
Stack elements (Top to Bottom): 
30 20 10 
30 Popped from stack.
20 Popped from stack.
10 Popped from stack.
Stack Underflow! Cannot pop from an empty stack.
Stack is empty.
*/
