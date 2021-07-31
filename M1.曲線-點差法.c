#include <stdio.h>

int main ()
{
    double X2,Y2,Xm,Ym,EXm,EYm,XYOK,EXYm,K,AnsY,AnsX;
    //X2 ,Y2,為雙曲線/橢圓的方程X,Y;Xm,Ym為座標;K為斜率
    int choose;
    printf ("1.an elliptic equation  2.Hyperbolic equation\n");
    scanf ("%d",&choose);
    printf ("Enter the numbers under X^2 and Y^2 in sequence\n");
    scanf ("%lf%lf",&X2,&Y2);
    XYOK = Y2 / X2 ;
    printf ("Enter coordinates (X,Y)\n");
    scanf ("%lf%lf",&Xm,&Ym);
    EXm = 2 * Xm;
    EYm = 2 * Ym;
    EXYm = EYm / EXm;
    K = XYOK / EXYm;
    if (choose == 1) {
        K = -1 * K;
    }
    AnsX = -1 * Xm * K;
    AnsY = AnsX + Ym;
    printf ("Ans is %lf X -y + (%lf)\n",K,AnsY);
    return 0;
}
