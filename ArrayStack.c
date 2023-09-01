# include <stdio.h>
# include "ArrayStack.h"

Stack* createStack(int capacity) {
    Stack* newStack = (Stack*) malloc ( sizeof(Stack) );
    newStack->data = (int*) malloc ( sizeof(int)*capacity );
    newStack->top = -1;
    newStack->capacity = capacity;
    return newStack;
}

void push (Stack* stack, int value) {
    if(stack->top == stack->capacity - 1) {
       printf("Débordement de la pile\n");
       return ;
    }
    stack->data[++stack->top] = value;
}

int pop (Stack* stack) {
    if(stack->top == -1) {
        printf("Sous-débordement de la pile\n");
        return -1;
    }
    return stack->data[stack->top--];
}

int isEmpty (Stack* stack) {
    return stack->top == -1;
}

int searchByindex (Stack* stack, int index) {
    if(index >= 0 && index <= stack->top) {
        int indexElement = stack->top - index;
        return stack->data [indexElement];
    } else {
        printf("Index invalide\n");
        return -1;
    }
}

void deleteByindex (Stack* stack, int index) {
    if(index >= 0 && index <= stack->top) {
        for(int i = index; i < stack->top; i++) {
            stack->data[i] = stack->data[i+1];
        }
        stack->top--;
    } else {
        printf("Index invalide\n");
    }
}

void printStack(Stack* stack) {
    if (stack->top == -1) {
        printf("Pile vide\n");
        return;
    }

    printf("Contenu de la pile : ");
    for (int i = 0; i <= stack->top; i++) {
        printf("%d ", stack->data[i]);
    }
    printf("\n");
}


int peek (Stack* stack) {
    if(stack->top == -1) {
        printf("Pile vide\n");
        return -1; // Valeur par défaut pour indiquer une pile vide
    }
    return stack->data[stack->top];
}

void freeStack(Stack* stack) {
    free(stack->data);
    free(stack);
}

void frenchExplainStack() {
    printf("Une pile est une structure de données linéaire qui suit le principe\n");
    printf("LIFO (Last In, First Out). Cela signifie que le dernier élément ajouté\n");
    printf("à la pile est le premier élément à en être retiré. Une pile peut être\n");
    printf("implémentée en utilisant un tableau en C, comme dans ce programme.\n");
    printf("Les opérations courantes sur une pile sont :\n");
    printf("- Empiler : Ajouter un élément au sommet de la pile.\n");
    printf("- Dépiler : Retirer l'élément du sommet de la pile.\n");
    printf("- Afficher la pile : Afficher tous les éléments de la pile.\n");
    printf("- Rechercher par index : Trouver un élément à un index spécifique.\n");
    printf("- Supprimer par index : Supprimer un élément à un index spécifique.\n");
    printf("- Afficher le sommet : Afficher l'élément au sommet de la pile sans le retirer.\n");
    printf("- Vérifier si la pile est vide : Vérifier si la pile ne contient aucun élément.\n");
    printf("Vous pouvez maintenant interagir avec la pile en utilisant le menu.\n");
}

void englishExplainStack() {
    printf("A stack is a linear data structure that follows the LIFO (Last In, First Out) principle. This means that the last element added to the stack is the first element to be removed. A stack can be implemented using an array in C, as in this program. Common operations on a stack are:\n");
    printf("- Push: Add an element to the top of the stack.\n");
    printf("- Pop: Remove the element from the top of the stack.\n");
    printf("- Display Stack: Display all elements in the stack.\n");
    printf("- Search by Index: Find an element at a specific index.\n");
    printf("- Delete by Index: Remove an element at a specific index.\n");
    printf("- Peek: Display the element at the top of the stack without removing it.\n");
    printf("- Check if Stack is Empty: Check if the stack contains no elements.\n");
    printf("You can now interact with the stack using the menu.\n");
}
