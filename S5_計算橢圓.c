#include <stdio.h>
#include <math.h>

int main () {
    double A2,B2,C,X,Y,e,l,LL;
    //有機會出現根號,小數,份數
    int XnY;
    printf ("輸入所需的功能\n");
    printf ("1.計算橢圓的基本資料    2.解方程式\n");
    int choose;
    scanf ("%d",&choose);
    switch (choose) {
        case 1 :
            for ( int start =1 ; start != 0 ; ) {
                XnY = 0;
                //焦點在X軸上
                printf ("輸入X^2，Y^2下的數值(標準情況X^2在Y^2前)\n");
                scanf ("%lf%lf",&A2,&B2);
                if (A2 > 0 && B2 > 0 ) {
                    //A和B必須為正整數
                    if (B2 > A2 ) {
                        double temp;
                        temp = A2;
                        A2 = B2;
                        B2 = temp;
                        XnY = 1;
                        //焦點在Y軸上
                    }
                    double C2 = A2 - B2;
                    double A = pow (A2,0.5);
                    double B = pow (B2,0.5);
                    C = pow (C2,0.5);
                    e = C / A;
                    l = A2 / C;
                    LL = (2 * A2) / C;
                    if (XnY == 0) {
                        printf ("焦點在X軸上\n");
                        printf ("焦點座標為（-%lf,0),(%lf,0)\n",C,C);
                        printf ("頂點為(-%lf , 0), (%lf , 0) , (0 , -%lf), (0 , %lf)\n",A,A,B,B);
                        printf ("長半軸長為%lf\n",A);
                        printf ("長軸長為%lf\n",2 * A);
                        printf ("短半軸長為%lf\n",B);
                        printf ("短軸長為%lf\n",2 * B);
                        printf ("準線為X=-%lf,X=%lf\n",l,l);
                        printf ("兩準線距離為%lf\n",LL);
                        printf ("離心率為%lf\n",e);
                    } else if (XnY == 1) {
                        printf ("焦點在Y軸上\n");
                        printf ("焦點座標為（0,-%lf),(0,%lf)\n",C,C);
                        printf ("頂點為(-%lf , 0), (%lf , 0) , (0 , -%lf), (0 , %lf)\n",B,B,A,A);
                        printf ("長半軸長為%lf\n",A);
                        printf ("長軸長為%lf\n",2 * A);
                        printf ("短半軸長為%lf\n",B);
                        printf ("短軸長為%lf\n",2 * B);
                        printf ("準線為Y = -%lf,Y = %lf\n",l,l);
                        printf ("兩準線距離為%lf\n",LL);
                        printf ("離心率為%lf\n",e);
                    }
                } else {
                printf ("輸入的數字不合理\n");
                }
                printf ("輸入1繼續,輸入0結束\n");
                scanf ("%d",&start);
            }
        break;
        case 2 :
                for ( int start =1 ; start != 0 ; ) {
                XnY = 0;
                //焦點在X軸上
                printf ("輸入X^2，Y^2下的數值(標準情況X^2在Y^2前)\n");
                scanf ("%lf%lf",&A2,&B2);
                if (A2 > 0 && B2 > 0 ) {
                    //A和B必須為正整數
                    if (B2 > A2 ) {
                        double temp;
                        temp = A2;
                        A2 = B2;
                        B2 = temp;
                        XnY = 1;
                        //焦點在Y軸上
                    }
                    double C2 = A2 - B2;
                    double A = pow (A2,0.5);
                    double B = pow (B2,0.5);
                    C = pow (C2,0.5);
                    e = C / A;
                    l = A2 / C;
                    LL = (2 * A2) / C;
                printf ("1.輸入傾倒角    2.輸入座標");
                }
            }
        break;
    }
    system ("pause");
    return 0;
}
