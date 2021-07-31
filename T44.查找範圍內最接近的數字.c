#include <stdio.h>
#include <stdlib.h>
int resend (void);

int main () {
    printf ("儲存?個數字\n");
    int choosenumber = resend();
    printf ("輸入%d個數字\n",choosenumber);
    int number [choosenumber];
    for (int run = 1 ; run <= choosenumber ; run++) {
        number [run - 1] = resend();
    }
    for (int use = 1 ; use != 0 ;) {
    printf ("輸入查詢的數字\n");
    int check = resend();
    if (check == 0) {
        break;
    }
    int usenumber = number [0];
    int Cnum = abs(check - number[0] );
    for (int run = 1 ; run <= choosenumber ; run++) {
        int pingnum = abs(check - number [run]);
        if ( pingnum < Cnum || pingnum == Cnum && number [run] < usenumber) {
            Cnum = pingnum;
            usenumber = number [run];
        }
    }
    printf ("最接近的數字是%d\n",usenumber);
    }
    return 0;
}

int resend (void) {
    int choose ;
    scanf ("%d",&choose);
    return choose;
}
