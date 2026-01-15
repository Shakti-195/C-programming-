#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *next;
    struct node *prev;
};
typedef struct node NODE;

NODE *START = NULL;
NODE *TAIL = NULL;

void insertatstart();
void insertatend();
void insertatspec();
void deleteatstart();
void deleteatend();
void deleteatspec();
void display();

int main() {
    int choice;
    char ch;

    printf("1. Insert the element at BEGINNING.\n");
    printf("2. Insert the element at END.\n");
    printf("3. Insert the element at SPECIFIC LOCATION.\n");
    printf("4. Delete FIRST ELEMENT.\n");
    printf("5. Delete LAST ELEMENT.\n");
    printf("6. Delete the element at SPECIFIC LOCATION.\n");
    printf("7. TRAVERSE the LIST.\n");

    do {
        printf("\nEnter the CHOICE: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insertatstart(); break;
            case 2: insertatend(); break;
            case 3: insertatspec(); break;
            case 4: deleteatstart(); break;
            case 5: deleteatend(); break;
            case 6: deleteatspec(); break;
            case 7: display(); break;
            default: printf("Enter the CORRECT CHOICE.\n");
        }

        printf("\nDo you wish to continue (y/n)? ");
        scanf(" %c", &ch);  // space before %c to consume leftover newline
    } while (ch == 'y' || ch == 'Y');

    return 0;
}

void insertatstart() {
    NODE *P = (NODE *)malloc(sizeof(NODE));
    int item;
    printf("Enter the ELEMENT to be inserted: ");
    scanf("%d", &item);
    P->info = item;

    if (START == NULL) {
        P->next = P->prev = P;
        START = TAIL = P;
    } else {
        P->prev = TAIL;
        P->next = START;
        TAIL->next = P;
        START->prev = P;
        START = P;
    }
}

void insertatend() {
    NODE *P = (NODE *)malloc(sizeof(NODE));
    int item;
    printf("Enter the ELEMENT to be inserted: ");
    scanf("%d", &item);
    P->info = item;

    if (START == NULL) {
        P->next = P->prev = P;
        START = TAIL = P;
    } else {
        P->prev = TAIL;
        P->next = START;
        TAIL->next = P;
        START->prev = P;
        TAIL = P;
    }
}

void insertatspec() {
    if (START == NULL) {
        printf("List is empty. Cannot insert at specific location.\n");
        return;
    }

    NODE *P = (NODE *)malloc(sizeof(NODE));
    int item, loc;
    printf("Enter the ELEMENT to be inserted: ");
    scanf("%d", &item);
    printf("Enter the LOCATION: ");
    scanf("%d", &loc);

    P->info = item;
    NODE *LOC = START;

    for (int k = 1; k < loc - 1 && LOC->next != START; k++) {
        LOC = LOC->next;
    }

    P->next = LOC->next;
    P->prev = LOC;
    LOC->next->prev = P;
    LOC->next = P;
}

void deleteatstart() {
    if (START == NULL) {
        printf("LIST IS EMPTY.\n");
        return;
    }

    NODE *P = START;
    if (START->next == START) {
        START = TAIL = NULL;
    } else {
        START = START->next;
        START->prev = TAIL;
        TAIL->next = START;
    }

    printf("Deleted ITEM: %d\n", P->info);
    free(P);
}

void deleteatend() {
    if (TAIL == NULL) {
        printf("LIST is EMPTY.\n");
        return;
    }

    NODE *P = TAIL;
    if (TAIL->prev == TAIL) {
        START = TAIL = NULL;
    } else {
        TAIL = TAIL->prev;
        TAIL->next = START;
        START->prev = TAIL;
    }

    printf("Deleted ITEM: %d\n", P->info);
    free(P);
}

void deleteatspec() {
    if (START == NULL) {
        printf("LIST is EMPTY.\n");
        return;
    }

    int loc;
    printf("Enter the LOCATION: ");
    scanf("%d", &loc);

    NODE *P = START, *TEMP = NULL;

    for (int i = 1; i < loc && P->next != START; i++) {
        TEMP = P;
        P = P->next;
    }

    if (P == START) {
        deleteatstart();
    } else if (P == TAIL) {
        deleteatend();
    } else {
        TEMP->next = P->next;
        P->next->prev = TEMP;
        printf("Deleted ITEM: %d\n", P->info);
        free(P);
    }
}

void display() {
    if (START == NULL) {
        printf("LIST is EMPTY\n");
        return;
    }

    NODE *P = START;
    printf("LIST ELEMENTS:\n");
    do {
        printf("%d\t", P->info);
        P = P->next;
    } while (P != START);
    printf("\n");
}
