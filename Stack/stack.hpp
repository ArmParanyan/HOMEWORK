#include <iostream>

class Stack
{
public:
    Stack() { top = -1; } //constructor
    void push(int var) { st[++top] = var; } // put number on stack
    int pop() { return st[top--]; } // take number off stack
protected:
    enum { MAX = 3 }; // size of stack array
    int st[MAX]; // stack: array of integers
    int top; // index to top of stack
};

class newStack : public Stack
{
public:
    void push(int var) 
    {
        if (top >= MAX)
        {
            std::cout << "stack is full\n";
            return;
        }
        st[++top] = var; 
    }
    int pop() 
    {
        if (top < 0)
        {
            std::cout << "Stack is empty can't pop element\n";
            return top;
        }
        return st[top--];
    }
};

