#include <stdio.h>

int main () {
    printf ("輸入三個數字求出中位數\n");
    int no1, no2, no3, ans;
    scanf ("%d%d%d", &no1, &no2, &no3);
    ans = no1;
    if (no2 > no1 && no2 < no3 || no2 > no3 && no2 < no1) {
        ans = no2;
    }
    if (no1 > no3 && no2 < no3 || no3 > no1 && no3< no2) {
        ans = no3;
    }
    printf ("中位數是%d\n",ans);
    return 0;
}
