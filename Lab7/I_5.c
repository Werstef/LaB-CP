#include <stdio.h>
#include <stdlib.h>

struct list{

    int random_numbers;
    struct list *node;
};


int main () {

    int i;

    struct list *head, *tempnew, *tail;


    head=NULL;

    for(i=0; i<25; i++){

        tempnew = (struct list*)malloc(sizeof (struct list));

        scanf("%d", &tempnew->random_numbers);

        tempnew->node=NULL;

        if(head == NULL)
            head = tempnew;
        else
            tail->node = tempnew;

        tail=tempnew;
    }

    tempnew = head;
    int sum=0;
    float average=0;

    while( tempnew != NULL){
        sum+=tempnew->random_numbers;
        tempnew=tempnew->node;
    }
    average =(float)sum/25;
    printf("%d %f", sum, average );

    return 0;
}

