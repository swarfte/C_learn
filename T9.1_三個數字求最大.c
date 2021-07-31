#include <stdio.h>

int main () {
    printf ("請輸入3個數字比較大小\n");
    int no1, no2, no3, max;
    scanf ("%d%d%d", &no1 ,&no2, &no3);
    max = no1;
    if (max < no2) {
        max = no2;
    }
    if (max < no3) {
        max = no3;
    }
    printf ("最大值為%d",max);
    return 0;
}
