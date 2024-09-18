// stack.h

#ifndef STACK_H
#define STACK_H

typedef struct stack Stack;

// Create stack
void create(Stack **s);

// Push a char into stack
void push(Stack *s, char x);

// Pop the top of the stack
char pop(Stack *s);

// Return the top of stack, without popping
char peek(Stack *s);

// Check if the stack is empty
int isEmpty(Stack *s);

// Return the size of the stack
int getSize(Stack *s);

#endif // STACK_H
