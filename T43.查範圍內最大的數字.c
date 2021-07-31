#include <stdio.h>
int resend (void);

int main () {
    printf ("需要儲存?個數字\n");
    int choose = resend();
    printf ("輸入%d個數字\n",choose);
    int number [choose];
    int max;
    for (int start = 1 ; start <= choose ; start++ ) {
        number [start - 1] = resend();
    }
    for (int start = 1 ; start != 0 ;) {
    printf ("輸入尋找的數字,輸入0結束\n");
    int findnumber = resend() ;
    if (findnumber == 0) {
        break;
    }
    int maxnumber = 0;
    for (int find = 1 ; find <= choose; find ++) {
    if (number [find - 1] <= findnumber && maxnumber <= number [find - 1]) {
         maxnumber = number [find - 1];
            }
        }
        if (maxnumber != 0 ) {
            printf ("最大值為%d\n",maxnumber);
        } else {
        printf ("數值範圍太小\n");
        }
    }
    return 0;
}

int resend (void) {
    int choose ;
    scanf ("%d",&choose);
    return choose;
}
