#include <stdio.h>
#include <stdlib.h>

struct list{

    int number;
    struct list* node;
};

int Sum(struct list* cursor){

    int s = 0;

    while(cursor != NULL){
        s+= cursor->number;
        cursor=cursor->node;
    }

    return s;
}


int main () {

    int i, n;

    struct list *head, *tail, *tempnew;

    head=NULL;

    scanf("%d", &n);

    for(i=0; i<n; i++){

        tempnew=(struct list*)malloc( sizeof(struct list));

        scanf("%d", &tempnew->number);

        tempnew->node=NULL;

        if( head == NULL)
            head=tempnew;
        else
            tail->node=tempnew;

        tail=tempnew;
    }

    tempnew=head;


    printf("%d", Sum(tempnew));

    return 0;
}
