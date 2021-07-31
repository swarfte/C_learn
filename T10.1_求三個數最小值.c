#include <stdio.h>

int main () {
    printf ("輸入3位數字比較大小\n");
    int no1, no2, no3, mix;
    scanf ("%d%d%d", &no1, &no2, &no3);
    mix = no1;
    if (no1 > no2) {
        mix = no2;
    }
    if (no2 > no3) {
        mix = no3;
    }
    printf ("最小值為%d\n",mix);
    return 0;
}
