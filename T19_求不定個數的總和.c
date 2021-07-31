#include <stdio.h>

int main () {
    printf ("輸入總和,結算按0\n");
    int PLUS;
    int ANS;
    int N;
    while (PLUS != 0 ) {
        scanf ("%d",&PLUS);
        ANS = ANS + PLUS;
        N = N + 1;
    }
    printf ("答案為%d\n",ANS);
}
