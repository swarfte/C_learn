#include <stdio.h>

int main () {
    printf ("X1 + X2 = ?\n");
    printf ("X1 * X2 = ?\n");
    int ADD ,MORE,X1,X2 ;
    scanf ("%d%d",&ADD,&MORE);
    for (X1 = 1 ; X1 <= ADD ; X1++) {
        X2 = ADD - X1;
        if (X1 * X2 == MORE && X1 <= X2) {
            printf ("%d  %d\n",X1,X2);
        }
    }
    return 0;
}
