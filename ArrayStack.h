#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include <stdlib.h>

typedef struct Stack {
    int* data;
    int top;
    int capacity;
} Stack;

Stack* createStack(int capacity);

void push(Stack* stack, int value);

int pop(Stack* stack);

int isEmpty(Stack* stack);

int searchByindex(Stack* stack, int index);

void deleteByindex(Stack* stack, int index);

int peek(Stack* stack);

void printStack(Stack* stack);

void freeStack(Stack* stack);

void frenchExplainStack();

void englishExplainStack();

#endif /* ARRAYSTACK_H */
