 #include <stdio.h>
 #include <stdlib.h>



 typedef struct list{

    int data;
    struct list* next;
 } list;

void Pop(list *head){

    int aux = head->data;
    list *temp = head;
    head = head->next;
    free(temp);
    printf("\n%d", aux);
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

    Pop(head);



 }
