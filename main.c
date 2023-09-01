#include <stdio.h>
#include <stdlib.h>
#include "ArrayStack.h"

int main() {
    int capacity, choice, value, index;
    Stack* stack = NULL;
    int language_choice;

    printf("Choisissez la langue :\n");
    printf("1. Français\n");
    printf("2. English\n");
    printf("Choix de la langue : ");
    scanf("%d", &language_choice);

    while (1) {
        printf("\nMenu de navigation :\n");
        if (language_choice == 1) {
            printf("1. Créer une pile\n");
            printf("2. Empiler\n");
            printf("3. Dépiler\n");
            printf("4. Afficher la pile\n");
            printf("5. Rechercher par index\n");
            printf("6. Supprimer par index\n");
            printf("7. Afficher le sommet\n");
            printf("8. Vérifier si la pile est vide\n");
            printf("9. Explication de la pile\n");
            printf("10. Quitter\n");
            printf("Choix : ");
        } else if (language_choice == 2) {
            printf("1. Create a Stack\n");
            printf("2. Push\n");
            printf("3. Pop\n");
            printf("4. Display Stack\n");
            printf("5. Search by Index\n");
            printf("6. Delete by Index\n");
            printf("7. Peek\n");
            printf("8. Check if Stack is Empty\n");
            printf("9. Explain Stack\n");
            printf("10. Quit\n");
            printf("Choice: ");
        }

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                system("cls");
                if (stack != NULL) {
                    freeStack(stack);
                }
                stack = NULL;
                printf("Capacité de la pile : ");
                scanf("%d", &capacity);
                stack = createStack(capacity);
                if (language_choice == 1) {
                    printf("Pile créée avec succès.\n");
                } else if (language_choice == 2) {
                    printf("Stack created successfully.\n");
                }
                break;

            case 2:
                system("cls");
                if (stack == NULL) {
                    if (language_choice == 1) {
                        printf("La pile n'a pas été créée. Créez une pile d'abord.\n");
                    } else if (language_choice == 2) {
                        printf("Stack has not been created. Create a stack first.\n");
                    }
                } else {
                    printf("Valeur à empiler : ");
                    scanf("%d", &value);
                    push(stack, value);
                    if (language_choice == 1) {
                        printf("%d a été empilé avec succès.\n", value);
                    } else if (language_choice == 2) {
                        printf("%d has been pushed successfully.\n", value);
                    }
                }
                break;

            case 3:
                system("cls");
                if (stack == NULL) {
                    if (language_choice == 1) {
                        printf("La pile n'a pas été créée. Créez une pile d'abord.\n");
                    } else if (language_choice == 2) {
                        printf("Stack has not been created. Create a stack first.\n");
                    }
                } else {
                    value = pop(stack);
                    if (value != -1) {
                        if (language_choice == 1) {
                            printf("%d a été dépilé avec succès.\n", value);
                        } else if (language_choice == 2) {
                            printf("%d has been popped successfully.\n", value);
                        }
                    }
                }
                break;

            case 4:
                system("cls");
                if (stack == NULL) {
                    if (language_choice == 1) {
                        printf("La pile n'a pas été créée. Créez une pile d'abord.\n");
                    } else if (language_choice == 2) {
                        printf("Stack has not been created. Create a stack first.\n");
                    }
                } else {
                    printStack(stack);
                }
                break;

            case 5:
                system("cls");
                if (stack == NULL) {
                    if (language_choice == 1) {
                        printf("La pile n'a pas été créée. Créez une pile d'abord.\n");
                    } else if (language_choice == 2) {
                        printf("Stack has not been created. Create a stack first.\n");
                    }
                } else {
                    printf("Index à rechercher : ");
                    scanf("%d", &index);
                    value = searchByindex(stack, index);
                    if (value != -1) {
                        if (language_choice == 1) {
                            printf("Élément trouvé à l'index %d : %d\n", index, value);
                        } else if (language_choice == 2) {
                            printf("Element found at index %d: %d\n", index, value);
                        }
                    }
                }
                break;

            case 6:
                system("cls");
                if (stack == NULL) {
                    if (language_choice == 1) {
                        printf("La pile n'a pas été créée. Créez une pile d'abord.\n");
                    } else if (language_choice == 2) {
                        printf("Stack has not been created. Create a stack first.\n");
                    }
                } else {
                    printf("Index à supprimer : ");
                    scanf("%d", &index);
                    deleteByindex(stack, index);
                    if (language_choice == 1) {
                        printf("Élément supprimé avec succès à l'index %d.\n", index);
                    } else if (language_choice == 2) {
                        printf("Element deleted successfully at index %d.\n", index);
                    }
                }
                break;

            case 7:
                system("cls");
                if (stack == NULL) {
                    if (language_choice == 1) {
                        printf("La pile n'a pas été créée. Créez une pile d'abord.\n");
                    } else if (language_choice == 2) {
                        printf("Stack has not been created. Create a stack first.\n");
                    }
                } else {
                    value = peek(stack);
                    if (value != -1) {
                        if (language_choice == 1) {
                            printf("Sommet de la pile : %d\n", value);
                        } else if (language_choice == 2) {
                            printf("Top of the stack: %d\n", value);
                        }
                    }
                }
                break;

            case 8:
                system("cls");
                if (stack == NULL) {
                    if (language_choice == 1) {
                        printf("La pile n'a pas été créée. Créez une pile d'abord.\n");
                    } else if (language_choice == 2) {
                        printf("Stack has not been created. Create a stack first.\n");
                    }
                } else {
                    if (isEmpty(stack)) {
                        if (language_choice == 1) {
                            printf("La pile est vide.\n");
                        } else if (language_choice == 2) {
                            printf("The stack is empty.\n");
                        }
                    } else {
                        if (language_choice == 1) {
                            printf("La pile n'est pas vide.\n");
                        } else if (language_choice == 2) {
                            printf("The stack is not empty.\n");
                        }
                    }
                }
                break;

            case 9:
                system("cls");
                if (language_choice == 1) {
                    frenchExplainStack;
                } else if (language_choice == 2) {
                    englishExplainStack();
                }
                break;

            case 10:
                if (stack != NULL) {
                    freeStack(stack);
                }
                printf("Programme terminé.\n");
                exit(0);

            default:
                system("cls");
                if (language_choice == 1) {
                    printf("Choix invalide. Veuillez entrer un numéro valide du menu.\n");
                } else if (language_choice == 2) {
                    printf("Invalid choice. Please enter a valid menu number.\n");
                }
        }
    }

    return 0;
}
