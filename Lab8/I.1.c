#include <stdio.h>
#include <stdlib.h>

struct list{

    int number;
    struct list* node;
};

void Count(struct list* cursor){
    int sol=0;
    int nr;
    scanf("%d", &nr);
    while(cursor != NULL){
        if(cursor->number == nr)
            sol++;
        cursor=cursor->node;
    }
    printf("%d", sol);
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


    Count(tempnew);


    return 0;
}
