 #include <stdio.h>
 #include <stdlib.h>



 typedef struct list{

    int data;
    struct list* next;
 } list;

 void InsertNth(list *head){
    int s;
    printf("Se citeste index-ul la care se pune valoare : ");
    scanf("%d", &s);
    printf("\n");
    list *temp = head;
    list *random =(list*)malloc(sizeof(list));
    printf("Se citeste nr pus la index-ul s: ");
    scanf ("%d", &random->data);
    printf("\n");
    int i;
    for(i=0; i<s - 2; i++)
        temp = temp->next;

    random->next = temp->next;
    temp->next = random;

    temp = head;

    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }

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

    InsertNth(head);
    temp = head;

    printf("\n");

    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }





 }
