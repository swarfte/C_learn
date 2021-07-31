#include <stdio.h>

int main () {
    int ANS = 87;
    int GO;
    int RUN;
    RUN = 1;
    printf ("猜數字\n");
    while (GO != ANS) {
        scanf ("%d",&GO);
        if (GO > ANS) {
            printf ("數字太大了\n");
            RUN = RUN + 1;
        } else if (GO < ANS) {
            printf ("數字太細了\n");
            RUN = RUN + 1;
        } else {
            printf ("你猜對了 ,共猜了%d次\n",RUN);
        }
    }
    return 0;
}
