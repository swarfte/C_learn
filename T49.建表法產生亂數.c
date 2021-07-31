#include <stdio.h>
#include <stdlib.h>
int resend (void);

int main () {
    srand (time (0));
    printf ("輸入上限\n");
    int choose = resend();
    int number = 0;
    int check [choose];
    for (int setzero = 0 ; setzero < choose ; setzero++) {
        check [setzero] = 0;
    }
    for (int run = 0 ; run < choose ; run++) {
            do {
        number = rand() % choose + 1;
            } while (check [run]  != 0);
            check [run]++;
        printf ("%d ",number);
    }
    return 0;
}

int resend (void) {
    int choose;
    scanf ("%d",&choose);
    return choose;
}
