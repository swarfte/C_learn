#include <stdio.h>

int main () {
    printf ("write down two number to find their Prime number\n");
    int X , Y,numN,numA;
    scanf ("%d%d",&X,&Y);
    if (X >= Y) {
        int temp;
        temp = X;
        X = Y;
        Y = temp;
    }
    for (int num = X ; num <= Y; num++) {
        for (int check = 2 ; num % check != 0 ;  ) {
                check++;
            if (num == check ) {
                numA = numA + num;
                numN++;
                printf ("%d\n",num);
            }
        }
    }
    printf ("two number area have %d Prime number\n",numN);
    numA = numA / numN ;
    printf ("their number absolute is %d\n",numA);
    system ("pause");
    return 0;
}
