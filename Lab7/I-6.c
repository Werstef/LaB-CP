#include <stdio.h>
#include <stdlib.h>

typedef struct list{

    int data;
    struct list* next;

} list;

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
    tempnew1 = head1;
    while(tempnew1 != NULL){
        printf("%d ", tempnew1->data);
        tempnew1 = tempnew1->next;
    }

    head2=NULL;
    int j;

    for(i=0; i<n; i++){

        tempnew2=( list*)malloc( sizeof(list) );

        tempnew1=head1;
        for(j=0;j<n-i-1;j++){
            tempnew1=tempnew1->next;
        }

        tempnew2->data=tempnew1->data;

        tempnew2->next=NULL;

        if(head2==NULL)
            head2=tempnew2;
        else
            tail2->next=tempnew2;

        tail2=tempnew2;
    }

    printf("\n");

    tempnew2=head2;
    while(tempnew2 != NULL){
        printf("%d ",tempnew2->data);
        tempnew2=tempnew2->next;
    }
    return 0;
}
