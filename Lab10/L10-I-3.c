#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void  LineCounter(FILE* f){
    char s[100001];
    int i = 0;
    while(feof(f) == 0){
        fgets(s, 1000, f);
        i++;
    }
    printf("%d", i);
}


int main () {

    FILE *f1, *f2;

    f1 = fopen("f1.txt","r");
    f2 = fopen("f2.txt","w");

    char chc;
    if(f1 == NULL){
        printf("File does not exist");
    }
    else{
         LineCounter(f1);
    }



    fclose(f1);
    fclose(f2);

    return 0;
}
