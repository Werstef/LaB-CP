#include <stdio.h>
#include <stdlib.h>

int shellsort(int v[], int n){
    int gap, i, j;
    for (gap = n/2; gap > 0; gap /= 2){
        for ( i = gap; i < n; i++ ){
            int aux = v[i];

            for (j = i; j >= gap && v[j - gap] > aux; j = j-gap)
                v[j] = v[j - gap];

            v[j] = aux;
        }
    }
    return 0;
}

int main() {

    int v[40], n, i;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
    }

    shellsort(v, n);

    for(i=0; i<n; i++)
        printf("%d ", v[i]);

}
