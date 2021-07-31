#include <stdio.h>

int main () {
    printf ("輸入兩個數字比較大小\n");
    int X,Y;
    scanf ("%d%d",&X,&Y);
    if (X > Y) {
        printf ("最大值為%d\n",X);
    } else {
        if (X < Y) {
            printf ("最大值為%d\n",Y);
        } else {
            printf ("最大值為%d\n",X);
        }
    }
    return 0;
}
