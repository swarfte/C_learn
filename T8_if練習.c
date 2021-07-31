#include <stdio.h>

int main () {
    int no1;
    printf  ("填數字0或1 \n請輸入:");
    scanf ("%d", &no1);
    if (no1 == 1) {
        printf ("你應該填0的\n");
    }
    if (no1 == 0) {
        printf ("你應該填1的\n");
    }
    return 0;
}
