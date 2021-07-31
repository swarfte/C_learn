#include <stdio.h>
#include <math.h>

void CurveStart (void);
void SelectCurveType (void);
void BasicInformationAndEquationsOfEllipse (void);
void BasicDataAndEquationsOfHyperbola (void);
void BasicDataAndEquationsOfParabola (void);
void EllipseSelection (void);
void HyperbolicSelection (void);
void ParabolicSelection (void);
void OvalEquations (void);
void OvalEquationsXY(void);
void OvalEquationsK (void);
void OvalValues (void);
void HyperbolicValues (void);
void ParabolicValues (void);
void A2andB2value (void);
void DetermineTheSizeOfA2AndB2 (void);
void SumOfEllipseFormulas (void);
void SumOfHyperbolicFormulas (void);
void SumOfParabolicFormulasX (void);
void SumOfParabolicFormulasY (void);
void OvalAnswer (void);
void HyperbolicEquations (void);
void HyperbolicEquationsXY (void);
void HyperbolaAnswer (void);
void ParabolicAnswerX (void);
void ParabolicAnswerY(void);
int Resend (void);
double Resendf (void);
int ChooseWhatToDo (void);

double A2,B2,C2,XandY,A,B,C,e,l,LL,Xa,Ya,P;//曲線資料用

int main (void) {//主體(偽)
    CurveStart ();
    return 0;
}

void SelectCurveType (void) {//選擇那種曲線
    printf ("輸入模式\n");
    printf ("1.橢圓   2.雙曲線   3.拋物線\n");
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

void EllipseSelection (void) {//橢圓-選擇
    printf ("輸入所需的功能\n");
    printf ("1.計算橢圓的基本資料    2.解方程式\n");
}

void A2andB2value (void) {//A^2和B^2的數值
    scanf ("%lf%lf",&A2,&B2);
}

void DetermineTheSizeOfA2AndB2 (void) {//判定A^2和B^2的大小和順序
    if (A2 > 0 && B2 > 0 ) {
        //A和B必須為正整數
        if (B2 > A2 ) {
        double temp;
        temp = A2;
        A2 = B2;
        B2 = temp;
        XandY = 1;
        //焦點在Y軸上
        }
    }
}

void SumOfEllipseFormulas (void) {//有關橢圓的公式總合集
    C2 = A2 - B2;
    A = pow (A2,0.5);
    B = pow (B2,0.5);
    C = pow (C2,0.5);
    e = C / A;
    l = A2 / C;
    LL = (2 * A2) / C;
}

void OvalEquations (void) {//橢圓解方程部份
    printf ("1.坐標&方程  2.斜率&方程  3.一般解方程(聯立)\n");
    int Choose = Resend();
    switch (Choose) {
    case 1 :
    OvalEquationsXY();
    break;
    case 2 :
    OvalEquationsK();
    break;
    case 3 :

    break;
    }
}

void OvalEquationsXY(void) {//橢圓-坐標&方程的方程式
    double X2,Y2,Xm,Ym,EXm,EYm,XYOK,EXYm,K,AnsY,AnsX;
    printf ("輸入X^2和Y^2下的數值\n");
    scanf ("%lf%lf",&X2,&Y2);
    XYOK = Y2 / X2 ;
    printf ("輸入座點 (X,Y)\n");
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

void OvalEquationsK(void) {//橢圓-斜率&方程的方程式
    double X2,Y2,Xm,Ym,EXm,EYm,XYOK,EXYm,K,AnsY,AnsX;
    printf ("輸入K的值\n");
    K = Resend();

}

void OvalAnswer (void) {//橢圓的答案
    if (XandY == 0) {
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
    } else if (XandY == 1) {
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
}

void OvalValues (void) {//橢圓部份的數值
    XandY = 0;
    //焦點在X軸上
    printf ("輸入X^2，Y^2下的數值(標準情況X^2在Y^2前)\n");
    A2andB2value();
    DetermineTheSizeOfA2AndB2();
    SumOfEllipseFormulas();
    OvalAnswer();
}

int ChooseWhatToDo (void) {//決定是否重覆執行
    int  go;
    printf ("輸入1繼續,輸入0結束\n");
    scanf ("%d",&go);
    return go;
}

void BasicInformationAndEquationsOfEllipse (void) {//有關橢圓的資料和方程
    //橢圓部份
    EllipseSelection();
    int Choose = Resend();
    switch (Choose) {
    case 1 :
    OvalValues();
    break;
    case 2:
    OvalEquations();
    break;
    }
}

void HyperbolicSelection (void) {//雙曲線-選擇
    printf ("輸入所需的功能\n");
    printf ("1.計算雙曲線的基本資料    2.解方程式\n");
}

void SumOfHyperbolicFormulas (void) {//有關雙曲線的公式總合集
    C2 = A2 + B2;
    A = pow (A2,0.5);
    B = pow (B2,0.5);
    C = pow (C2,0.5);
    e = C / A;
    l = A2 / C;
    LL = (2 * A2) / C;
}

void HyperbolicEquations (void) {//雙曲線解方程部份
    printf ("1.坐標&方程  2.斜率&方程  3.一般解方程(聯立)\n");
    int Choose = Resend();
    switch (Choose) {
    case 1 :

    break;
    case 2 :

    break;
    case 3 :

    break;
    }
}

void HyperbolicEquationsXY (void) {//雙曲線-坐標&方程的方程式
    double X2,Y2,Xm,Ym,EXm,EYm,XYOK,EXYm,K,AnsY,AnsX;
    printf ("輸入X^2和Y^2下的數值\n");
    scanf ("%lf%lf",&X2,&Y2);
    XYOK = Y2 / X2 ;
    printf ("Enter coordinates (X,Y)\n");
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

void HyperbolicValues (void) {//雙曲線部份的數值
    XandY = 0;
    //焦點在X軸上
    printf ("輸入X^2，Y^2下的數值(標準情況X^2在Y^2前)\n");
    A2andB2value();
    DetermineTheSizeOfA2AndB2();
    SumOfHyperbolicFormulas();
    HyperbolaAnswer();
}

void HyperbolaAnswer (void) {//雙曲線的答案
    if (XandY == 0) {
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
    } else if (XandY == 1) {
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
}

void BasicDataAndEquationsOfHyperbola (void) {//有關雙曲線的資料和方程
    //雙曲線部份
    HyperbolicSelection();
    int Choose = Resend();
    switch (Choose) {
    case 1 :
    HyperbolicValues();
    break;
    case 2 :
    HyperbolicEquations();
    break;
    }
}

void ParabolicSelection (void) {//拋物線-選擇
    printf ("輸入所需的功能\n");
    printf ("1.計算拋物線的基本資料    2.解方程式\n");
}

void SumOfParabolicFormulasX (void) {//有關拋物線的公式總合集(X^2)
    printf ("輸入X的係數\n");
    Xa = Resendf();
    printf ("1.負數   2.正數\n");
    int num = Resend();
    if (num == 2 ) {
    P = Xa / 2;
    } else if ( num == 1) {
    P = -1 * (Xa / 2);
    }
}

void SumOfParabolicFormulasY (void) {//有關拋物線的公式總合集(Y^2)
    printf ("輸入Y的係數\n");
    Ya = Resendf();
    printf ("1.負數   2.正數\n");
    int num = Resend();
    if (num == 2) {
    P = Ya / 2;
    } else if ( num == 1) {
    P = -1 * (Ya / 2);
    }
}

void ParabolicValues (void) {//拋物線部份的數值
    printf ("1.Y^2  2.X^2\n");
    int Choose = Resend();
    if (Choose == 1) {
    SumOfParabolicFormulasX();
    ParabolicAnswerX();
    } else if (Choose == 2) {
    SumOfParabolicFormulasY();
    ParabolicAnswerY();
    }
}

void ParabolicAnswerX (void) {//拋物線的答案X^2
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

void ParabolicAnswerY (void) {//拋物線的答案Y^2
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

void BasicDataAndEquationsOfParabola (void) {//有關拋物線的資料和方程
    //拋物線部份
    ParabolicSelection();
    int Choose = Resend();
    switch (Choose) {
    case 1 :
    ParabolicValues();
    break;
    case 2 :

    break;
    }
}

void CurveStart (void) {//啟動曲線部份(主體)
    for (int Start = 1 ; Start != 0;) {
    SelectCurveType();
    int Choose = Resend();
    switch (Choose) {
    case 1 :
        BasicInformationAndEquationsOfEllipse();
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
        Start = ChooseWhatToDo();
    }
}
