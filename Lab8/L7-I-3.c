 #include <stdio.h>
 #include <stdlib.h>



 typedef struct list{

    int data;
    struct list* next;
 } list;


void DeleteList(list* head){

    list *temp = head;

    while (temp != NULL) {
        head = temp;
        temp = temp->next;
        free(head);
    }
    head = NULL;
    printf("Lista a fost stearsa cu succes");
}


 int main () {


    list *head, *tail, *temp;
    head = NULL;
    int i, n;
    scanf("%d", &n);

    for(i=0; i<n; i++){

    temp = (list*)malloc(sizeof(list));
    temp->next = NULL;
    scanf("%d", &temp->data);

    if(head == NULL)
        head = temp;
    else
        tail->next = temp;

    tail = temp;
    }

    temp = head;

    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");

    DeleteList(head);
    /*while (p!=NULL) {
        r = p;
        p = p->next;
        free(p);
    }*/
 }
