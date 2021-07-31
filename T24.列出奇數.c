#include <stdio.h>

int main () {
    printf ("輸入兩個數字求之間的奇數\n");
    int A,B;
    scanf ("%d%d",&A,&B);
    if (A > B) {
        int temp;
        temp = B;
        B = A;
        A = temp;
    }
    for (int num = A; num <= B; num++) {
            if (num % 2 ==1) {
                printf ("%d\n",num);
            }
    }
    return 0;
}
