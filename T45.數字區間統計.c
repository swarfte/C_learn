#include <stdio.h>
int resend (void);

int main () {
    printf("輸入想統計的數量\n");
    int loadnumber = resend();
    int number [loadnumber];
    int check [10]  = {0};
    printf ("想入%d個數字,大小上限為100\n",loadnumber);
    for (int run = 1 ; run <= loadnumber ; run++) {//儲存數據
    number [run - 1] = resend();
     check [((number [run - 1]) - 1) / 10 ]++;
    }
    for (int run = 1 ; run <= 10 ; run++) {//印出結果
        printf ("%d ~ %2d :",1 + (10 * (run - 1)), run * 10);
        for (int start = 0 ; start < check [run - 1]; start++) {
            printf ("*");
        }
        printf ("\n");
    }
    return 0;
}

int resend (void) {
    int choose;
    scanf ("%d",&choose);
    return choose;
}
