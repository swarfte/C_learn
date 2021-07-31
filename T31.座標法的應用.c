#include <stdio.h>

int main () {
    int X, Y;
    //X=X軸
    //Y=Y軸
    int Z,choose;
    printf ("1.空心三角形    2.實心三角形\n");
    scanf ("%d",&choose);
    printf ("Z = ?\n");
    scanf ("%d",&Z);
    if (choose == 2) {
        for (Y = 1 ; Y <= Z ; Y++) {
            //高度
            for (X = 1 ; X <= Z ; X++) {
                //長度
                if (Y >= X) {
                    printf ("*");
                    } else {
                        printf (" ");
                    }
                }
            printf ("\n");
        }
    } else if (choose == 1) {
        for (Y = 1 ; Y <= Z ; Y++) {
                //高度
            for (X = 1 ; X <= Z ; X++) {
                //長度
                if (X == 1|| Y == Z || X == Y) {
                    //X == 1 每行的第一格都印
                    //X == Z 最後一行時全印
                    //X == Y 當X=Y時,是一條傾斜的直線,約為45度
                    printf ("*");
                } else {
                    printf (" ");
                }
            }
            printf ("\n");
        }
    }
    return 0;
}
