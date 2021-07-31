#include <stdio.h>

int main () {
    printf ("輸入兩個數字列出範圍內的乘法關係\n 1.起始數 2.終止數\n");
    int X , Y,Z,run;
    scanf ("%d%d",&X,&Y);
    run = 0;
    for (int num = X ; num <= Y ; ) {
            run++ ;
            if (run == 10) {
                run = 1;
                num++;
            }
        printf ("%d x %d = %d\n",num,run,num * run);
    }
    return 0;
}
