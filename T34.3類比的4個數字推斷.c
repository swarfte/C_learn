#include <stdio.h>

int maxTWO (int ,int );
int maxTHREE (int ,int ,int);
int maxFOUR (int,int,int,int);
int main () {
    printf ("輸入四個數字比較大小\n");
    int A,B,C,D;
    scanf ("%d%d%d%d",&A,&B,&C,&D);
    printf ("最大值為%d\n",maxFOUR (A,B,C,D));
    return 0;
}

int maxFOUR (int a1 , int a2 , int a3 , int a4) {
    return maxTWO (maxTHREE (a1 , a2 ,a3), a4);
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
