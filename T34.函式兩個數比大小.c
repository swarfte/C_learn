#include <stdio.h>
int maxTWO (int , int );

int main () {
    int c,d;
    printf ("輸入兩個數字\n");
    scanf ("%d%d",&c,&d);
    printf ("最大值為%d\n",maxTWO(c,d));
    return 0;
}

int maxTWO (int a , int b) {
    if (a >= b) {
        return a;
    } else {
    return b;
    }
}
