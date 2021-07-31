#include <stdio.h>
#include <math.h>
void CurveStart (void);
void BasicDataAndEquationsOfEllipse (void);
void BasicDataAndEquationsOfHyperbola (void);
void BasicDataAndEquationsOfParabola (void);
void BasicDataOfEllipse (void);
void EquationsOfEllipse (void);
void EquationsOfEllipseXY (void);
void BasicDataOfHyperbola (void);
void EquationsOfHyperbola (void);
void EquationsOfHyperbolaXY (void);
void ParabolicAnswerX (void);
void ParabolicAnswerY (void);
int Resend (void);
double Resendf (void);

int main () {//偽主體
    CurveStart();
    return 0;
}

int Resend (void) {//回傳輸入的數值
    int number;
    scanf ("%d",&number);
    return number;
}

double Resendf (void) {//回傳輸入的數值(可小數)
    double number;
    scanf ("%lf",&number);
    return number;
}

void BasicDataAndEquationsOfEllipse (void) {//有關橢圓的資料和方程
    printf ("1.橢圓的基本資料  2.解方程\n");
    int choose = Resend();
    switch (choose) {
    case 1 :
    BasicDataOfEllipse();
    break;
    case 2 :
    EquationsOfEllidouble();
    break;
    }
}

void BasicDataOfEllipse (void){//橢圓的基本資料
    double A2,B2,C,X,Y,e,l,LL;
    int XnY;
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
}

void EquationsOfEllidouble (void){//橢圓的方程式
    printf ("1.坐標&方程式  2.斜率&方程式  3.一般方程式解法\n");
    int choose = Resend();
    switch (choose) {
    case 1 :
    EquationsOfEllidoubleXY();
    break;
    case 2 :

    break;
    case 3 :

    break;
    }
}

void EquationsOfEllidoubleXY (void){//橢圓的點差法計算
    double X2,Y2,Xm,Ym,EXm,EYm,XYOK,EXYm,K,AnsY,AnsX;
    //X2 ,Y2,為橢圓的方程X,Y;Xm,Ym為座標;K為斜率
    printf ("輸入X^2和Y^2對應的數字\n");
    scanf ("%lf%lf",&X2,&Y2);
    XYOK = Y2 / X2 ;
    printf ("輸入X,Y座標\n");
    scanf ("%lf%lf",&Xm,&Ym);
    EXm = 2 * Xm;
    EYm = 2 * Ym;
    EXYm = EYm / EXm;
    K = XYOK / EXYm;
    K = -1 * K;
    AnsX = -1 * Xm * K;
    AnsY = AnsX + Ym;
    printf ("Ans is %lf X -y + (%lf)\n",K,AnsY);
}

void EquationsOfHyperbola (void) {//雙曲線方程式
    printf ("1.坐標&方程式  2.斜率&方程式  3.一般方程式解法\n");
    int choose = Resend();
    switch (choose) {
    case 1 :
    EquationsOfHyperbolaXY();
    break;
    case 2 :

    break;
    case 3 :

    break;
    }
}

void BasicDataAndEquationsOfHyperbola (void){//有關雙曲線的資料和方程
     printf ("輸入所需的功能\n");
    printf ("1.計算雙曲線的基本資料    2.解方程式\n");
    int choose = Resend();
    switch (choose) {
    case 1 :
    BasicDataOfHyperbola();
    break;
    case 2 :
    EquationsOfHyperbola ();
    break;
    }
}

void EquationsOfHyperbolaXY (void){//雙曲線的點差法計算
    double X2,Y2,Xm,Ym,EXm,EYm,XYOK,EXYm,K,AnsY,AnsX;
    //X2 ,Y2,為雙曲線/橢圓的方程X,Y;Xm,Ym為座標;K為斜率
    int choose;
    printf ("輸入X^2和Y^2對應的數\n");
    scanf ("%lf%lf",&X2,&Y2);
    XYOK = Y2 / X2 ;
    printf ("輸入座標\n");
    scanf ("%lf%lf",&Xm,&Ym);
    EXm = 2 * Xm;
    EYm = 2 * Ym;
    EXYm = EYm / EXm;
    K = XYOK / EXYm;
    AnsX = -1 * Xm * K;
    AnsY = AnsX + Ym;
    printf ("Ans is %lf X -y + (%lf)\n",K,AnsY);
}

void BasicDataOfHyperbola (void) {//雙曲線的基本資料
    double A2,B2,C,X,Y,e,l,LL;
    //有機會出現根號,小數,份數
    int XnY;
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
                    double C2 = A2 + B2;
                    double A = pow (A2,0.5);
                    double B = pow (B2,0.5);
                    C = pow (C2,0.5);
                    e = C / A;
                    l = A2 / C;
                    LL = (2 * A2) / C;
                    if (XnY == 0) {
                        printf ("焦點在X軸上\n");
                        printf ("焦點座標為（-%lf,0),(%lf,0)\n",C,C);
                        printf ("頂點為(-%lf , 0), (%lf , 0) \n",A,A,B,B);
                        printf ("實半軸長為%lf\n",A);
                        printf ("實軸長為%lf\n",2 * A);
                        printf ("虛半軸長為%lf\n",B);
                        printf ("虛軸長為%lf\n",2 * B);
                        printf ("準線為X=-%lf,X=%lf\n",l,l);
                        printf ("兩準線距離為%lf\n",LL);
                        printf ("離心率為%lf\n",e);
                    } else if (XnY == 1) {
                        printf ("焦點在Y軸上\n");
                        printf ("焦點座標為（0,-%lf),(0,%lf)\n",C,C);
                        printf ("頂點為 (0 , -%lf), (0 , %lf)\n",B,B,A,A);
                        printf ("實半軸長為%lf\n",A);
                        printf ("實軸長為%lf\n",2 * A);
                        printf ("虛半軸長為%lf\n",B);
                        printf ("虛軸長為%lf\n",2 * B);
                        printf ("準線為Y = -%lf,Y = %lf\n",l,l);
                        printf ("兩準線距離為%lf\n",LL);
                        printf ("離心率為%lf\n",e);
                    }
                } else {
                printf ("輸入的數字不合理\n");
                }
}

void ParabolicAnswerX (void) {//拋物線左右開口情況
    double Xa,P;
     printf ("輸入X的係數\n");
    Xa = Resendf();
    printf ("1.負數   2.正數\n");
    int num = Resend();
    if (num == 2 ) {
    P = Xa / 2;
    } else if ( num == 1) {
    P = -1 * (Xa / 2);
    }
    printf ("焦點為(%lf,0)\n",P / 2);
        printf ("頂點為0,0\n");
        printf ("離心率為1\n");
        printf ("準線為X = %lf\n",-1 * (P /2));
        if (P > 0) {
            printf ("開口開右\n");
        } else if (P < 0) {
            printf ("開口開左\n");
        }
}

void ParabolicAnswerY (void) {//拋物線上下開口情況
    double Ya,P;
    printf ("輸入Y的係數\n");
    Ya = Resendf();
    printf ("1.負數   2.正數\n");
    int num = Resend();
    if (num == 2) {
    P = Ya / 2;
    } else if ( num == 1) {
    P = -1 * (Ya / 2);
    }
    printf ("焦點為(0,%lf)\n",P / 2);
        printf ("頂點為0,0\n");
        printf ("離心率為1\n");
        printf ("準線為X = %lf\n",-1 * (P /2));
        if (P > 0) {
            printf ("開口開上\n");
        } else if (P < 0) {
            printf ("開口開下\n");
        }
}

void BasicDataAndEquationsOfParabola (void){//有關拋物線的資料和方程
    printf ("1.拋物線的基本資料  2.解方程式\n");
    int Choose = Resend();
    switch (Choose) {
    case 1 :
    printf ("1.Y^2  2.X^2\n");
    int Choose = Resend();
    if (Choose == 1) {
    ParabolicAnswerX ();
    } else if (Choose == 2) {
    ParabolicAnswerY ();
    }
    break;
    case 2 :

    break;
    }
}

void CurveStart (void) {//啟動曲線(主體)
    for (int Start = 1 ; Start != 0;) {
    printf ("1.橢圓  2.雙曲線  3.拋物線\n");
    int Choose = Resend();
    switch (Choose) {
    case 1 :
        BasicDataAndEquationsOfEllipse();
        //橢圓
    break;

    case 2 :
        BasicDataAndEquationsOfHyperbola();
        //雙曲線
    break;

    case 3 :
        BasicDataAndEquationsOfParabola();
        //拋物線
    break;
        }
        printf ("1.繼續  0.結束\n");
        Start = Resend();
    }
}
