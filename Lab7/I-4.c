#include <stdio.h>
#include <stdlib.h>

typedef struct list{

    int data;
    struct list* next;

} list;

void merge(list* cursor1, list* cursor2, list* head3){

    list *tail3, *tempnew3;

    while(cursor1!=NULL && cursor2!=NULL){


        tempnew3 =(list*)malloc(sizeof(list));

        tempnew3->next=NULL;

        if(cursor1->data > cursor2->data){
            tempnew3->data = cursor2->data;
            cursor2 = cursor2->next;
        }
        else{
            tempnew3->data = cursor1->data;
            cursor1 = cursor1->next;
        }
        if(head3 == NULL)
            head3 = tempnew3;
        else
            tail3->next = tempnew3;
        tail3 = tempnew3;
    }

    while(cursor1 != NULL){

        tempnew3 =(list*)malloc(sizeof(list));

        tempnew3->data = cursor1->data;
        tempnew3->next=NULL;

        tail3->next = tempnew3;
        tail3 = tempnew3;
        cursor1 = cursor1->next;
    }

    while(cursor2 != NULL){

        tempnew3 =(list*)malloc(sizeof(list));

        tempnew3->data = cursor2->data;
        tempnew3->next=NULL;

        tail3->next = tempnew3;
        tail3 = tempnew3;
        cursor2 = cursor2->next;
    }
    list* tempnew1 = head3;

    while(tempnew1 != NULL){
        printf("%d ", tempnew1->data);
        tempnew1 = tempnew1->next;
    }

}

int main () {

    int i, n;

    list *head1, *tail1, *tempnew1;

    list *head2, *tail2, *tempnew2;

    head1 = NULL;

    scanf("%d", &n);

    for(i=0; i<n; i++){

        tempnew1=(list*)malloc( sizeof(list));

        scanf("%d", &tempnew1->data);

        tempnew1->next=NULL;

        if( head1 == NULL)
            head1 = tempnew1;
        else
            tail1->next=tempnew1;

        tail1=tempnew1;
    }

    head2=NULL;
    int m;
    scanf("%d", &m);
    for(i=0; i<m; i++){

        tempnew2=( list*)malloc( sizeof(list) );

        scanf("%d", &tempnew2->data);

        tempnew2->next=NULL;

        if( head2 == NULL)
            head2=tempnew2;
        else
            tail2->next=tempnew2;

        tail2=tempnew2;
    }

    tempnew1 = head1;
    tempnew2 = head2;

    list* head3 =NULL;

    merge(tempnew1, tempnew2, head3);



    return 0;
}
