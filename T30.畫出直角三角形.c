#include <stdio.h>

int main () {
    printf ("1.實心三角形    2.空心三角形\n");
    int choose;
    scanf ("%d",&choose);
    printf ("N = ?\n");
    int N;
    scanf ("%d",&N);
    if (choose == 1) {
        for (int numY = 1 ; numY <= N ;numY++) {
            //行數
            for (int numX = 0; numX < numY - 1 ;numX++) {
                    //每行個數
                printf ("*");
            }
            printf ("*\n");
        }
    }
    if (choose == 2) {
        printf ("*\n");
        //第一層
        for (int numY = 1 ; numY < N - 1 ;numY++) {
                //行數
            printf ("*");
            for (int numX = 1 ; numX < numY ; numX++) {
                //中間重復部份的空白
                printf (" ");
            }
            printf ("*\n");
        }
        for (int exit = 1 ; exit < N ; exit++ ) {
                //收尾
            printf ("*");
        }
        printf ("*\n");
    }
    return 0;
}
