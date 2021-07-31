#include <stdio.h>

int main () {
    printf ("輸入3條邊長度\n");
    int no1, no2, no3;
    scanf ("%d%d%d", &no1,&no2,&no3);
    if (no1 > 0 && no2 >0 && no3 > 0) {
        if (no1 != no2 && no2 != no3 && no3 != no1) {
            printf ("No,這不是一個等腰三角形\n");
        }
        if (no1 == no2 || no2 == no3 || no3 == no1) {
            printf ("Yes,這是一個等腰三角形\n");
        }
    }
    return 0;
}
