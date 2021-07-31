#include <stdio.h>

int main () {
    printf ("輸入3個數求最大值\n");
    int X,Y,Z,ANS;
    scanf ("%d%d%d",&X,&Y,&Z);
    ANS = X;
    if (Y > X && Y > Z) {
        ANS = Y;
    } else {
    if (Z > Y && Z > X) {
        ANS = Z;
        }
    }
        printf ("最大值為%d\n",ANS);
    return 0;
}
