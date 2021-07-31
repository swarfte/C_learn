#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int resend (void);

int main () {
    printf ("size : ? * ?\n");
    srand (time (0));
    int value [2];
    for (int run = 0 ; run < 2 ; run++){//讀取XY
        value [run]  = resend();
    }
    int number [value [0]] [value [1]];
    int change = 1;
    for (int X = 0 ; X < value [0] ; X++){//X軸存取數字
        for (int Y = 0 ; Y < value [1] ; Y++) {//Y軸存取數字
            number [X][Y] = change;
            change++;
        }
    }
        int add = 0;
        for (int X = 0 ; X < value [0] ; X++){//X軸隨機數字
            for (int Y = 0 ; Y < value [1] ; Y++){//Y軸隨機數字
                int ramdan = rand () % ((value [0] * value [1] ) - add) + add;
                int ramdanX = ramdan / value [0]; //生成X軸的數字
                int ramdanY = ramdan % value [1];//生成Y軸數字
                int temp = number [X] [Y];
                number [X] [Y] = number [ramdanX] [ramdanY];
                number [ramdanX] [ramdanY] = temp;
                add++;
            }
        }
    for (int X = 0  ;X < value [0] ; X++){
        for (int Y = 0 ; Y < value [1] ; Y++){
            printf ("%d ",number [X][Y]);
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

