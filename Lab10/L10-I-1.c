#include <stdio.h>
#include <stdlib.h>



int main () {

    FILE *f1, *f2;

    f1 = fopen("f1.txt","r");
    f2 = fopen("f2.txt","w");

    char chc;
    if(f1 == NULL){
        printf("File does not exist");
    }
    else{
        while(feof(f1) == 0){
             chc = fgetc(f1);
            if(chc >= 'a' && chc <= 'z')
                chc-='a'-'A';
            fputc(chc, f2);
        }
    }


    fclose(f1);
    fclose(f2);

    return 0;
}
