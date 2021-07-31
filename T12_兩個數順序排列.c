#include <stdio.h>

int main () {
    printf ("輸入兩位數\n");
    int no1, no2;
    scanf ("%d%d", &no1, &no2);
    if (no1 > no2) {
        int temp1;
        temp1 = no1;
        no1 = no2;
        no2 = temp1;
    }
    printf ("順序為%d  %d",no1, no2);
    return 0;
}
