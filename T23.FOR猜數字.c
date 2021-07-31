#include <stdio.h>

int main () {
    printf ("輸入兩個數字求中間數\n ");
    int N,M;
    scanf ("%d%d",&N,&M);
        if (N > M) {
        int temp;
        temp = M;
        M = N;
        N = temp;
    }
    int tick = 0;
    for (int ET = N ; ET <= M ; ET++ ,tick++) {
        printf ("%d\n",ET);
    }
    printf ("總共有%d個數字出現\n",tick);
    return 0;
}
