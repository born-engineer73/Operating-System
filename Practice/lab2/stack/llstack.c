// llstack.c

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct Node {
    char data;
    struct Node *next;
};

struct stack {
    struct Node *top;
    int size;
};

void create(Stack **s) {
    *s = (Stack *)malloc(sizeof(Stack));
    (*s)->top = NULL;
    (*s)->size = 0;
}

void push(Stack *s, char x) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode != NULL) {
        newNode->data = x;
        newNode->next = s->top;
        s->top = newNode;
        s->size++;
        printf("Pushed %c. [%d]\n", x, getSize(s));
    } else {
        printf("Memory allocation failed!\n");
    }
}

char pop(Stack *s) {
    if (s->top != NULL) {
        struct Node *temp = s->top;
        char x = temp->data;
        s->top = s->top->next;
        free(temp);
        s->size--;
        printf("Pop, returning %c [%d]\n", x, getSize(s));
        return x;
    }
    printf("Stack underflow!\n");
    return '\0';
}

char peek(Stack *s) {
    if (s->top != NULL) {
        return s->top->data;
    }
    return '\0';
}

int isEmpty(Stack *s) {
    return s->top == NULL;
}

int getSize(Stack *s) {
    return s->size;
}

void destroy(Stack *s) {
    while (s->top != NULL) {
        struct Node *temp = s->top;
        s->top = s->top->next;
        free(temp);
    }
    free(s);
}
