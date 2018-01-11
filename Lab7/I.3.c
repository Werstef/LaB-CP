#include <stdio.h>
#include <stdlib.h>

struct list1{

    char number1;
    struct list1* node1;
};



int main () {

    int i, n;

    struct list1 *head1, *tail1, *tempnew1;

    struct list1 *head2, *tail2, *tempnew2;

    head=NULL;

    scanf("%d", &n);

    for(i=0; i<n; i++){

        tempnew1=(struct list1*)malloc( sizeof(struct list1));

        scanf("%d", &tempnew1->number);

        tempnew1->node=NULL;

        if( head1 == NULL)
            head1=tempnew1;
        else
            tail1->node=tempnew1;

        tail1=tempnew1;
    }

    scanf("%d", &m)

    for(i=0; i<m; i++){

        tempnew2=(struct list1*)malloc( sizeof(struct list1));

        scanf("%d", &tempnew2->number);

        tempnew2->node=NULL;

        if( head2 == NULL)
            head2=tempnew2;
        else
            tail2->node=tempnew2;

        tail2=tempnew2;
    }



    return 0;
}
