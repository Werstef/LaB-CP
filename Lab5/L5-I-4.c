#include <stdio.h>
#include <string.h>




int main () {
    char s[50];
    char aux;
    gets(s);
    int j = 0;
    int L = 1;
    int i;
    int maximum = 0;
    for(i = 1; i< strlen(s); i++){
        if(s[i] - s[i-1] == 1)
            L++;
        else{
            L = 1;
            j = i;
        }
        if(L > maximum)
            maximum = L;
    }
    if( j == 1)
        j--;

    printf("%d\n", maximum);


    return 0;
}
