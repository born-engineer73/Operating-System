// arrstack.c

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define MAX 100

struct stack {
    char data[MAX];
    int top;
};

void create(Stack **s) {
    *s = (Stack *)malloc(sizeof(Stack));
    (*s)->top = -1;
}

void push(Stack *s, char x) {
    if (s->top < MAX - 1) {
        s->data[++(s->top)] = x;
        printf("Pushed %c. [%d]\n", x, getSize(s));
    } else {
        printf("Stack overflow!\n");
    }
}

char pop(Stack *s) {
    if (s->top >= 0) {
        char x = s->data[(s->top)--];
        printf("Pop, returning %c [%d]\n", x, getSize(s));
        return x;
    }
    printf("Stack underflow!\n");
    return '\0';
}

char peek(Stack *s) {
    if (s->top >= 0) {
        return s->data[s->top];
    }
    return '\0';
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int getSize(Stack *s) {
    return s->top + 1;
}

void destroy(Stack *s) {
    free(s);
}
