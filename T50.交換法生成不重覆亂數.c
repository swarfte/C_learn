#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int resend (void);

int main () {
    srand (time(0));
    printf ("輸入上限\n");
    int choose = resend();
    int number [choose];
    for (int run = 1 ; run <= choose ; run++) {
        number [run - 1] = run;
    }
    for (int star = 1 ; star <= choose ; star++) {
      int  rumdan =  rand () % ((choose +1) - star) + star;
      int change = number [star - 1];
      number [star - 1] = number [rumdan - 1];
      number [rumdan - 1] = change;
      printf ("%d  ",number [star - 1]);
    }
    return 0;
}

int resend (void) {
    int choose;
    scanf ("%d",&choose);
    return choose;
}
