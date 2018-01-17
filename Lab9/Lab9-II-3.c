#include <stdlib.h>

int v[1001];

int n, First, Last, i;

int change(int st, int dr) {
    int First = st;
    int Last = dr;
    int i =0, j = -1;

    while (First!=Last) {
        if (v[First] > v[Last]) {
            int aux = v[First];
            v[First] = v[Last];
            v[Last] = aux;

            aux = i;
            i = -j;
            j = -aux;

        }
        First += i;
        Last += j;
    }

    return First;

}

void QuickSort(int st, int dr) {

    if(st < dr) {
        First = change(st, dr);
        QuickSort(st, First-1);
        QuickSort(First+1, dr);
    }
}

int main () {
    scanf("%d", &n);

    for (i=1; i<=n; i++)
        scanf("%d", &v[i]);

    QuickSort(1, n);

    for (i=1; i<=n; i++)
        printf("%d ", v[i]);

    return 0;
}
