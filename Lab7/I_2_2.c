#include <stdio.h>
#include <stdlib.h>

typedef struct list{
    struct list* prev;
    int data;
    struct list* next;
} list;

int main () {


    list *head, *tail, *tempnew;

    head = NULL;
    int i, n;
    scanf("%d", &n);

    for(i=0; i<n; i++){

        tempnew = (list*)malloc(sizeof (list));

        scanf("%d", &tempnew->data);

        tempnew->next = NULL;
        tempnew->prev = NULL;

        if(head == NULL)
            head = tempnew;
        else
            tail->next = tempnew;

        tempnew->prev = tail;

        tail=tempnew;

    }

    tempnew = head;

    while(tempnew != NULL){
        printf("%d ", tempnew->data);
        tempnew = tempnew->next;
    }
    printf("\n");

    tempnew = tail;

    while(tempnew != NULL){
        printf("%d ", tempnew->data);
        tempnew = tempnew->prev;
    }

    return 0;
}
