#include <stdio.h>

int main () {
    double A1, B1, C1,XYZ;
    //準備運算用的記憶體
    printf ("輸入三角形的三條邊長度\n");
    scanf ("%lf%lf%lf",&A1,&B1,&C1);
    if (A1 > B1) {
        XYZ = A1;
        A1 = B1;
        B1 = XYZ;
        //此時A比B小
    }
    if (A1 > C1) {
        XYZ = A1 ;
        A1 = C1;
        C1 = XYZ;
        //此時A比C小
    }
    if (B1 > C1) {
        XYZ = B1;
        B1 = C1;
        C1 = XYZ;
        //此時B比C小
    }
    //printf ("大小順序為%d %d %d\n",A1,B1,C1);
    if (A1 + B1 < C1 || A1 < 0 || B1 <0 || C1 < 0) {
        printf ("這不是有效的三角形\n");
        //判斷是否為正常的三角形
    }
    if (A1 + B1 > C1 && A1 > 0 && B1 > 0 && C1 > 0) {
    printf ("請輸入所需功能編號\n");
    printf ("1.判斷三角形的類別    2.計算三角形的三角函數(默認數字最小的邊為對邊)\n");
    //進入選擇畫面
    int QWE;
    scanf ("%d",&QWE);
        if (QWE != 1 && QWE != 2) {
            printf ("這不是有效的操作\n");
            //判斷是否為正常的輸入
        }
        if (QWE == 1) {
            if (A1 == C1) {
                printf ("這是一個等邊三角形\n");
                //三邊相等
            }
            if (A1 == B1 || B1 == C1) {
                printf ("這是一個等腰三角形\n");
                //其中兩條邊相等
            }
            if (A1 * A1 + B1 * B1 == C1 * C1) {
                printf ("這是一個直角三角形\n");
                //A^2+B^2=C^2為直角
            }
            if (A1 != C1 && A1 != B1 && B1 != C1 && A1 * A1 + B1 * B1 != C1 * C1) {
                printf ("這不是一個特殊的三角形\n");
                //沒特殊的地方則推定為一般三角形
            }
        }
        if (QWE == 2) {
            double sinA, cosA, tanA, secA, cscA, cotA;
            //準備運算用的記憶體
            sinA = A1 / C1;
            cosA = B1 / C1;
            tanA = A1 / B1;
            secA = C1 / B1;
            cscA = C1 / A1 ;
            cotA = B1 / A1;
            //A1為對邊 B1為鄰邊 C1為斜邊
            printf ("sin值為%lf\n",sinA);
            printf ("cos值為%lf\n",cosA);
            printf ("tan值為%lf\n",tanA);
            printf ("sec值為%lf\n",secA);
            printf ("csc值為%lf\n",cscA);
            printf ("cot值為%lf\n",cotA);
        }
    }
    system ("pause");
    //按一下按鍵結束
    return 0;
}
