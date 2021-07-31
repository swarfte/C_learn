#include <stdio.h>

int Resend (void);

int main () {
    printf ("輸入想儲存多少個數字\n");
    int choose = Resend();
    int RunTime [choose];
    for (int Run = 1 ; Run <= choose; Run++) {
    printf ("輸入第%d個數字\n",Run);
    RunTime [Run - 1] = Resend ();
    }
    for (int Run = 1 ; Run != 0;) {
        printf ("輸入想查詢的數字,按0結束\n");
         int Runchoose = Resend();
        if (Runchoose <= choose && Runchoose != 0 ) {
        printf ("儲存的數值為%d\n", RunTime [Runchoose - 1]);
        } else if (Runchoose > choose ) {
            printf ("該數字還未定義數值\n");
        } else if (Runchoose == 0) {
            break;
        }
    }
    system ("pause");
    return 0;
}

int Resend (void) {
    int chooseint;
    scanf ("%d",&chooseint);
    return chooseint;
}
