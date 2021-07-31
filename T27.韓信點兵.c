#include <stdio.h>

int main () {
    printf ("輸入搜索範圍\n");
    int X,Y;
    scanf ("%d%d",&X,&Y);
    for (int numX = X ; numX <= Y ; numX++) {
        if (numX % 3 == 2 &&    numX % 5 == 3 && numX % 7 == 2 ) {
            printf ("%d\n",numX);
        }
    }
    return 0;
}
