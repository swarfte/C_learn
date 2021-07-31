#include <stdio.h>

int main () {
    int X,Y;
    for (Y = 1 ; Y <= 5 ; Y++) {
        for (X = 1 ; X <= 5 ; X++) {
            if (X >= Y) {
                printf ("*");
            } else {
                printf (" ");
            }
        }
        printf ("\n");
    }
    printf ("\n");
     for (Y = 1 ; Y <= 5 ; Y++) {
        for (X = 1 ; X <= 5 ; X++) {
            if (X == 5 || X == Y || Y == 1) {
                printf ("*");
            } else {
                printf (" ");
            }
        }
        printf ("\n");
    }
    return 0;
}
