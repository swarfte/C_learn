#include <stdio.h>

int main () {
    printf ("輸入數字比較大小\n");
    int A,B,C,X;
    scanf ("%d%d%d",&A,&B,&C);
    if (B < A) {
        X = B;
        B = A;
        A = X;
        //此時可以得出,B>A
        }
    if (C < A) {
        X = C;
        C = A;
        A = X;
        //此時可以得出,C>A時
    }
    if (C < B) {
        X = C;
        C = B;
        B = X;//此時可以得出C>B,則順序已排好
    }
    printf ("排序大小為%d  %d  %d\n",A,B,C);
    system ("pause");
    return 0;
}
