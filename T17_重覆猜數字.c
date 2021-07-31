#include <stdio.h>

int main () {
    int ANS = 87;
    int GO;
    printf ("猜數字\n");
    while (GO != ANS) {
        scanf ("%d",&GO);
        if (GO > ANS) {
            printf ("數字太大了\n");
        } else if (GO < ANS) {
            printf ("數字太細了\n");
        } else {
            printf ("你猜對了\n");
        }
    }
    return 0;
}
