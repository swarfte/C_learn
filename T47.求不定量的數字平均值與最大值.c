#include <stdio.h>
int resend (void);

int main () {
    printf ("?個數字\n");
    int choose = resend();
    int number [choose];
    int max = 0 , sum = 0;
    for (int run = 0 ; run < choose  ; run++) {
        number [run] = resend();
        if (max <= number [run]) {
            max = number [run];
        }
        sum += number [run];
    }
    sum = sum / choose;
    printf ("最大值為%d\n平均值為%d\n",max,sum);
    return 0;
}

int resend (void) {
    int choose ;
    scanf ("%d",&choose);
    return choose;
}
