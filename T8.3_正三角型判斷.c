#include <stdio.h>

int main () {
    printf ("請輸入3條邊的邊長\n");
    int no1, no2, no3;
    scanf ("%d %d %d", &no1, &no2, &no3);
    if (no1 > 0 && no2 > 0 && no3 >0) {
                if (no1 != no2 || no2 != no3 || no3 != no1) {
                    printf ("No,這不是正三角形\n");
                }
                if (no1 == no2 && no2 == no3 && no3 == no1) {
                    printf ("Yes,這是正三角形\n");
        }
    }
    return 0;
}
