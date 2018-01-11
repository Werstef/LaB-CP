#include <stdio.h>
#include <stdlib.h>

struct list{

    int number;
    struct list* node;
};

int GetNth(struct list* cursor, int n){

    int nr;
    scanf("%d", &nr);
    int sol=0;
    if(nr <= n){
        while(cursor != NULL){
            sol++;
            if(sol == nr)
                return cursor->number;
            cursor=cursor->node;
        }
    }

    return -1;

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


    printf("%d", GetNth(tempnew, n));

    return 0;
}
