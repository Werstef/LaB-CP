#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int strlen_a(char s[]){
    int i = 0;
    for (i = 0;;i++)
        if (s[i] == 0)
            return i;
}

int strlen_p(char* s){
    int i = 0;
    for(i = 0;;i++)
        if(*(s+i) == 0)
            return i;
}

strend(char s[], char t[]){
    int i, j, ok = 0;
    for(i=strlen(s)-1, j=strlen(t)-1; j >= 0; i--, j--){
        if(s[i] == t[j])
            ok = 1;
        else
            return 0;
    }
    return 1;
}

char s[1000], t[100];

int main () {

    gets(s);
    gets(t);

    printf("%d %d %d", strlen_a(s), strlen_p(s), strend(s, t));

    return 0;
}
