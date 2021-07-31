#include <stdio.h>
int resend (void);

int main () {
    printf ("輸入?個數字\n");
    int choose = resend();
    int number [choose];
    for (int run = 0 ; run < choose ; run++){//存入數字
        number [run] = resend();
    }
    for (int star = 0 ; star < choose - 1 ; star++){//一共進行多少次
        for (int check = 0 ; check < choose - 1 ; check++){//每一輪的排序
            if (number [check] > number [check + 1]) {//假設左邊的比右邊大
                int change = number [check];//臨時換位
                number [check] = number [check + 1];
                number [check + 1] = change;
            }
        }
    }
    for (int write = 0 ; write < choose ; write++){
        printf ("%d ",number [write]);
    }
    return 0;
}

int resend (void){
    int choose;
    scanf ("%d",&choose);
    return choose;
}
