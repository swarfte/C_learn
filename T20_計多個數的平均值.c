#include <stdio.h>

int main () {
    int ANS;
    int nob;
    int tick;
    printf ("輸入數字,結束按0\n");
    ANS = 0;
    tick = 0;
    scanf ("%d",&nob);
    while (nob != 0 ) {
        ANS = ANS + nob;
        tick = tick + 1;
        scanf ("%d",&nob);
    }
    ANS = ANS / tick;
    printf ("平均值為%d\n",ANS);

}

