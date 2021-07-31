#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int num;
    int OS;
    for (int start = 1 ; start != 0 ; ) {
        printf ("Enter the number of multiple choice questions\n");
        scanf ("%d",&num);
        srand ((time (0) + (num * num )+ num));
        for (int run = 1 ; run <= num ; run++) {
            OS = rand () % 4 + 1;
            if (OS == 1 ) {
                printf ("A\n");
            } else if (OS == 2) {
                printf ("B\n");
            } else if (OS == 3) {
                printf ("C\n");
            } else if (OS == 4) {
                printf ("D\n");
            }
        }
        printf ("Enter 1 to continue to use, enter 0 to end\n");
        scanf ("%d",&start);
    }
    system ("pause");
}
