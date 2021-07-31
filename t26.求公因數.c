#include <stdio.h>

int main () {
    printf ("輸入要求公因數的數字\n");
    int X;
    scanf ("%d",&X);
    for (int numX = 1 ; numX <= X ; numX++) {
        if (X % numX == 0) {
            printf ("%d\n",numX);
        }
    }
    return 0;
}
