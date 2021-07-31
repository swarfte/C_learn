#include <stdio.h>

int main () {
    printf ("輸入需要的功能\n");
    printf ("1.求平均數 2.求中位數  3.求眾數   4.求方差   5.求標準差  10.我全都要\n");
    int choose;
    double ANS;
    double mun;
    int tick;
    ANS = 0;
    tick = 0;
    scanf ("%d",&choose);
    switch (choose) {
        case 1 :
            //平均數
        printf ("輸入數字,結束按0\n");
        scanf ("%lf",&mun);
        while (mun != 0 ) {
            ANS = ANS + mun;
            tick = tick + 1;
            scanf ("%lf",&mun);
        }
        ANS = ANS / tick;
        printf ("平均值為%lf,一共有%d個數字\n",ANS ,tick);
        break;
    }
    return 0;
}
