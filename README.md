# Stacks C++

A stack is an abstract data type (ADT) that follows the Last-In, First-Out (LIFO) principle. This means the element inserted last is the first one to be removed, like a stack of plates.

## Core Stack Operations
The fundamental operations performed on a stack are:

1. Push: Adds an element to the top of the stack.

2. Pop: Removes the element from the top of the stack.

3. Top/Peek: Returns the element at the top of the stack without removing it.

4. IsEmpty: Checks if the stack contains any elements.

5. Size: Returns the number of elements in the stack.

## Implementation in C++
In C++, stacks are primarily implemented using two methods:

### 1. Standard Template Library (STL) std::stack
This is the easiest and most preferred way to use a stack in C++. It is a container adaptor, meaning it uses an existing container (like std::deque or std::list) and provides a restricted interface to enforce the LIFO principle.

Header: <stack>

Underlying Container: By default, it uses std::deque. You can explicitly specify others like std::vector or std::list.

Key Functions:

s.push(value): Push (adds to the top)

s.pop(): Pop (removes the top element)

s.top(): Access the top element

s.empty(): Check if empty

s.size(): Get the number of elements

### 2. Custom Implementations (Arrays or Linked Lists)
While the STL version is standard, understanding custom implementations is crucial for theoretical knowledge:

#### a. Array Implementation<br>

A fixed-size array is used.

A top index tracks the position of the last inserted element.

Push: Increment top and insert the new element at the new top index. Must check for Stack Overflow (array full).

Pop: Decrement top. Must check for Stack Underflow (array empty).

Efficiency: Very fast, O(1) for all core operations, and good cache locality.

#### b. Linked List Implementation<br>

A singly-linked list is used, where insertion and deletion always occur at the head of the list.

The head of the list serves as the top of the stack.

Push: Insert a new node at the beginning (head). O(1) complexity.

Pop: Delete the node at the beginning (head). O(1) complexity.

Advantage: Dynamic size, avoids the need to check for overflow (until memory runs out).

Disadvantage: Higher memory overhead due to storing pointers.

## Applications of Stacks
Stacks are fundamental structures in programming and computer science:

Function Call Management: The Call Stack is used by the operating system to manage function calls. When a function is called, its state (local variables, return address) is pushed onto the stack. When it returns, the state is popped.

Expression Evaluation: Converting and evaluating arithmetic expressions (Infix to Postfix/Prefix conversion).

Syntax Parsing: Used by compilers to check for balanced parentheses, braces, and brackets.

Backtracking Algorithms: Algorithms like Depth-First Search (DFS) or finding a path in a maze implicitly or explicitly use a stack to keep track of previous states.

Undo/Redo Functionality: Stacks are perfect for storing actions that can be undone (the last action taken is the first one to be undone).
