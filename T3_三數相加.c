#include <stdio.h>
int main() {
    int no1, no2, no3, sum;
    printf ("第一個數字:");
    scanf ("%d", &no1);
    printf ("第二個數字:");
    scanf ("%d", &no2);
    printf ("第三個數字:");
    scanf ("%d", &no3);
    sum = no1 + no2 + no3;
    printf ("答案為%d", sum);
    return 0;
}
