#include <stdio.h>
#include <stdlib.h>

typedef struct list{

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

        tempnew->next=NULL;

        if(head == NULL)
            head = tempnew;
        else
            tail->next = tempnew;

        tail=tempnew;

        tail->next = head;
    }

    tempnew = head;
    i = 0;
    while(i < n+1){
        printf("%d ", tempnew->data);
        tempnew = tempnew->next;
        i++;
    }
    return 0;
}
