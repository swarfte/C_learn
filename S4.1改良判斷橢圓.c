#include <stdio.h>
#include <math.h>

int main () {
    int A,B,temp,XnY;
    int ET = 1;
    double C;
    printf ("限定份數,方程右方為1時使用\n");
    while (ET != 0 ) {
        printf ("請\"依次\"輸入X^2,Y^2下的數或相乘的數\n");
        scanf ("%d%d",&A,&B);
                XnY = 0;
                if (B > A > 0) {
                    temp = A;
                    A = B;
                    B = temp;
                    XnY = 1;
                }
                C = A - B;
                C = sqrt (C);
                if (A > C) {
                    if (XnY == 0) {
                        printf ("橢圓在X軸上,焦點座標為(-%lf , 0),(%lf , 0)\n",C,C);
                    } else {
                        printf ("橢圓在Y軸上,焦點座標為(0 , -%lf),(0 , %lf)\n",C,C);
                    }
                }
        printf ("輸入1繼續判斷,輸入0結束程式\n");
        scanf ("%d",&ET);
    }
    return 0;
}
