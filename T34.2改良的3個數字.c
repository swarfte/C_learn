#include <stdio.h>

int maxTWO (int ,int );
int maxTHREE (int ,int ,int);
int main () {
    printf ("輸入三個數字比較大小\n");
    int A,B,C;
    scanf ("%d%d%d",&A,&B,&C);
    printf ("最大值為%d\n",maxTHREE (A,B,C));
    return 0;
}

int maxTHREE (int x ,int y,int z) {
    return maxTWO (maxTWO (x , y) ,  z);
}
int maxTWO (int a , int b) {
    if (a >= b) {
        return a;
    } else {
    return b;
    }
}

