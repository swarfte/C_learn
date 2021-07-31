#include <stdio.h>
int resend (void);
int main () {
    printf ("size : ? * ?\n");
    int value [2];
    for (int run = 0 ; run < 2 ; run++){
        value [run]  = resend();
    }
    int number [value [0]] [value [1]];
    int change = 1;
    for (int X = 0 ; X < value [0] ; X++){
        for (int Y = 0 ; Y < value [1] ; Y++) {
            number [X][Y] = change;
            change++;
        }
    }
    for (int X = 0  ;X < value [0] ; X++){
        for (int Y = 0 ; Y < value [1] ; Y++){
            printf ("%d ",number [X][Y]);
        }
        printf ("\n");
    }
    return 0;
}

int resend (void) {
    int choose;
    scanf ("%d",&choose);
    return choose;
}
