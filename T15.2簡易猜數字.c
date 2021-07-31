#include <stdio.h>

int main () {
    printf ("輸入猜的數字\n");
    int X,Z;
    scanf ("%d",&X);
    Z = 87;
    if (X > Z) {
        printf ("太大了\n");
    } else {
        if (X < Z) {
            printf ("太小了\n");
            } else {
                printf ("終於猜到了\n");
            }
    }
    return 0;
}
