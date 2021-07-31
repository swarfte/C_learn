#include <stdio.h>
int main () {
    float plus, sum;
    printf ("第一個數字:");
    scanf("%f", &plus);
    sum = plus;
    printf ("第二個數字:");
    scanf("%f", &plus);
    sum= sum + plus;
    printf ("第三個數字:");
    scanf("%f", &plus);
    sum= sum + plus;
    printf ("第四個數字:");
    scanf("%f", &plus);
    sum= sum + plus;
    printf ("答案為%f\n", sum);
    return 0;
    }
//利用sum和plus 互相加起來
