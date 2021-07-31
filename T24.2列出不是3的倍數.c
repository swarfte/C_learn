#include <stdio.h>

int main () {
    printf ("輸入兩個數字求之間不是3的倍數\n");
    int A,B;
    scanf ("%d%d",&A,&B);
    if (A > B) {
        int temp;
        temp = B;
        B = A;
        A = temp;
    }
    for (int num = A; num <= B; num++) {
            if (num % 3 != 0 && num % 2 == 0) {
                printf ("%d\n",num);
            }
    }
    return 0;
}


