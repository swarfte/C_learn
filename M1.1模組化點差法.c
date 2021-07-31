#include <stdio.h>

void ChooseWhichEquationToUse (void);
void XSquaredValueYSquaredValue (void);
void CoordinateValue (void);
void GoToFindK (void);
void PrintfTheAnswer (void);

double X2,Y2,Xm,Ym,choose,XYOK,EXYm,EXm,EYm,AnsX,AnsY,K;

int main (void){
    ChooseWhichEquationToUse ();
    //選擇模式
    XSquaredValueAndYSquaredValue ();
    //X^2和Y^2的數值
    CoordinateValue ();
    //座標的數值
    GoToFindK ();
    //計算出K的數值
    PrintfTheAnswer ();
    //印出答案
    return 0;
}

void ChooseWhichEquationToUse (void) {
    printf ("1.an elliptic equation  2.Hyperbolic equation\n");
    scanf ("%lf",&choose);
}

void XSquaredValueAndYSquaredValue (void) {
     printf ("Enter the numbers under X^2 and Y^2 in sequence\n");
     scanf ("%lf%lf",&X2,&Y2);
}

void CoordinateValue (void) {
    printf ("Enter coordinates (X,Y)\n");
    scanf ("%lf%lf",&Xm,&Ym);
}

void GoToFindK (void) {
    XYOK = Y2 / X2 ;
    EXm = 2 * Xm;
    EYm = 2 * Ym;
    EXYm = EYm / EXm;
    K = XYOK / EXYm;
    if (choose == 1) {
        K = -1 * K;
    }
}

void PrintfTheAnswer (void) {
    AnsX = -1 * Xm * K;
    AnsY = AnsX + Ym;
    printf ("Ans is %lf X -y + (%lf)\n",K,AnsY);
    system ("pause");
}
