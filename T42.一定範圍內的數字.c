#include <stdio.h>
int resend (void);

int main () {
    printf ("需要儲存?個數字\n");
    int choose = resend();
    printf ("輸入%d個數字\n",choose);
    int number [choose];
    int check [3];    // 下限,上限,總和
    for (int start = 1 ; start <= choose ; start++ ) {//確認多少個數值
        number [start - 1] = resend();
    }
    for (check [2] = 1 ; check [2] != 0 ; ) {//查找流程
        printf ("輸入查詢範圍,輸入0 , 0結束\n");
        for (int run = 0 ; run <= 1 ; run++) { //代入上下限
        check [run] = resend();
        }
        if ( check [0] >= check [1]) { //確保前者小於後者
            int temp = check [0];
            check [0] = check [1];
            check [1] = temp;
        }
        for (int run = 1 ; run <= choose ; run++) {//找數字
            if (number [run -1] >= check [0] && number [run - 1] <= check [1]) {
                printf ("%d  ",number [run - 1]);
            }
        }
        printf ("\n");
        check [2] = check [0] + check [1];
    }
    return 0;
}

int resend (void) {
    int choose;
    scanf ("%d",&choose);
    return choose;
}
