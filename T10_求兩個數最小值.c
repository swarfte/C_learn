#include <stdio.h>

int main () {
    printf ("輸入兩個數字比較大小\n");
    int no1, no2,mix;
    scanf ("%d%d", &no1, &no2);
    mix = no2;
    if (no1 < no2) {
        mix = no1;
    }
    printf ("最小值為%d\n",mix);
    return 0;
}
