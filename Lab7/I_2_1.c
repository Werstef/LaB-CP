#include <stdio.h>
#include <stdlib.h>

struct list{

    int data;
    struct list *node;
};


int main () {

    int i, n;
    struct list *head, *tempnew, *end;
    scanf("%d", &n);



    head=NULL;

    for(i=0; i<n; i++){

        tempnew=(struct list*)malloc( sizeof(struct list) );
        scanf("%d",&tempnew->data);
        tempnew->node=NULL;

        if(head==NULL)
            head=tempnew;
        else
            end->node=tempnew;
        end=tempnew;
    }

    tempnew=head;
    while(tempnew != NULL){
        printf("%d ",tempnew->data);
        tempnew=tempnew->node;
    }

    return 0;
}
