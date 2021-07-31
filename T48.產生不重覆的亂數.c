#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int resend (void);

int main () {
    srand (time);
    for (int star = 1 ; star != 0 ;) {
    printf ("輸入上限\n");
    int choose = resend();
    int number [choose];
    int check = 0;
    for (int run = 0; run < choose ; run++ ){//運行的次數
        do {
        number [run] = rand() % choose + 1;
            for (check = 0 ; check < run ; check++){//檢測是否出現重複
                if (number [run] == number [check]) {//若有重複的就重來
                    break;
                }
            }
        } while (check != run);
        printf ("%d ",number[run]);
    }
    printf ("\n");
    printf ("輸入1繼續,0結束\n");
    star = resend();
    }
    return 0;
}

int resend (void) {
    int choose;
    scanf ("%d",&choose);
    return choose;
}
