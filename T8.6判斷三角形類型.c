#include <stdio.h>

int main () {
    printf ("請輸入三角形三條邊的長度\n");
    int no1, no2, no3;
    scanf ("%d%d%d", &no1, &no2, &no3);
    if (no1 <0 || no2 < 0 || no3 < 0) {
        printf ("這組數字不能組成三角形\n");
    }
    if (no1 > 0 && no2 > 0 && no3 > 0) {
        if (no1 + no2 < no3 || no2 + no3 < no1 || no3 + no1 < no2) {
            printf ("這種數字不能組成三角形\n");
        }
        if (no1 + no2 > no3 && no2 + no3 > no1 && no3 + no1 > no2 ) {
            if (no1 == no2 && no2 == no3 && no3 == no1) {
                printf ("Yes,這是全等三角形\n");
            }
            if (no1 == no2 || no2 == no3 || no3 == no1) {
                printf ("Yes,這是等邊三角形\n");
            }
            if (no1 * no1 + no2 * no2 == no3 * no3 || no2 * no2 + no3 * no3 == no1 * no1 || no3 * no3 + no1 * no1 == no2 * no2) {
                printf ("Yes,這是直角三角形\n");
            }
        }
    }
    return 0;
}
