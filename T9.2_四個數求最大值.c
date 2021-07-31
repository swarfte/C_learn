#include <stdio.h>

int main () {
    printf ("輸入4個數字比較大小\n");
    int X1, X2, X3, X4, max;
    scanf ("%d%d%d%d", &X1, &X2, &X3, &X4);
    max = X1;
    if (max < X2) {
        max = X2;
    }
    if (max < X3) {
        max = X3;
    }
        if (max < X4) {
        max = X4;
    }
    printf ("最大值為%d\n", max);
    return 0;
}
