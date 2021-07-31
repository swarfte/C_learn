#include <stdio.h>

int main () {
    printf ("輸入3個數字比較\n");
    int X,Y,Z,XYZ;
    scanf ("%d%d%d",&X,&Y,&Z);
    if (X > Y) {
        XYZ = X;
        X = Y;
        Y = XYZ;
    } else {
        if (X > Z) {
            XYZ = X;
            X = Z;
            Z = XYZ;
        } else {
            if (Z > Y) {
                XYZ = Z;
                Z = Y;
                Y = XYZ;
            }
        }
        }
        printf ("3個數的順序為%d %d %d",X,Y,Z);
    return 0;
}
