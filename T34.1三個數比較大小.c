#include <stdio.h>

int BIG3 (int ,int ,int);
int main () {
    printf ("輸入三個數字比較大小\n");
    int A,B,C;
    scanf ("%d%d%d",&A,&B,&C);
    printf ("最大值為%d\n",BIG3 (A,B,C));
    return 0;
}

int BIG3 (int x,int y,int z) {
    if (x >= y) {
        if (x >= z) {
        return x;
        }
    }
    if (y >= z) {
        if (y >= x) {
            return y;
        }
    }
    if (z >= x) {
        if (z >= y) {
            return z;
        }
    }
}
