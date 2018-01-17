#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    LongestLineLength (char* file){
    char s[100001], aux;
    FILE* f;
    f = fopen(file, "r");

    if(f == NULL){
        printf("File does not exist");
        return;
    }

    char t;
    int WordCounter = 0;
    int CurrentLine = 0;

    while(feof(f) == 0){
        t = fgetc(f);
        if(t == '\n' || t==' '){
            WordCounter++;
        }
    }

    printf("%d", WordCounter);

}


int main () {


    char file[30] = "f1.txt";

     LongestLineLength (file);


    return 0;
}
