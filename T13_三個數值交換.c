#include <stdio.h>

int main () {
    printf ("輸入三個數字\n");
    int A, B, C;
    scanf ("%d%d%d", &A, &B, &C);
    int TP1, TP2;
    TP1 = A;
    A = B;
    B = C;
    C = TP1;
    //由ABC->BCA
    printf ("交換後為%d %d  %d\n",A,B,C);
    return 0;
}
