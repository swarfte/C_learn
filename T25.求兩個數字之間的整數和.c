#include <stdio.h>

int main () {
    int X,Y,Z;
    printf ("輸入兩個數字求整數和\n");
    scanf ("%d%d",&X,&Y);
    if (X > Y) {
        int temp ;
        temp = X;
        X = Y;
        Y = temp;
    }
    for (int num = X ; num <= Y ; num++) {
        Z = Z + num;
    }
    printf ("總和為%d",Z);
    return 0;
}
