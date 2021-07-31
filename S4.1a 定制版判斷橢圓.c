#include <stdio.h>
#include <math.h>

int main () {
    int A,B,temp,XnY;
    int ET = 1;
    double C;
    printf ("限定份数,方程右方为1时使用\n");
    while (ET != 0 ) {
        printf ("请\"依次\"输入X^2,Y^2下的数或相乘的数\n");
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
                        printf ("椭圆在X轴上,焦点座标为(-%lf , 0),(%lf , 0)\n",C,C);
                    } else {
                        printf ("椭圆在Y轴上,焦点座标为(0 , -%lf),(0 , %lf)\n",C,C);
                    }
                }
        printf ("输入1继续判断,输入0结束程式\n");
        scanf ("%d",&ET);
    }
    return 0;
}

