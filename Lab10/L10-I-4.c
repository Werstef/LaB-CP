#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void   CharacterCounter(char* file){
    char s[100001], aux;
    FILE* f;
    f = fopen(file, "r");

    if(f == NULL){
        printf("File does not exist");
        return;
    }

    int numberchc = 0;

    while(feof(f) == 0){
        fgetc(f);
        numberchc++;
    }

    printf("%d", numberchc);

}


int main () {


    char file[30] = "f1.txt";

    CharacterCounter(file);


    return 0;
}
