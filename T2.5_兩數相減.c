#include <stdio.h>
int main () {
    float no1, no2, sum;
    printf ("被減數:");
    scanf ("%f", &no1);
    printf ("減數:");
    scanf ("%f", &no2);
    sum = no1 - no2;
    printf ("答案為%f",sum);
    return 0;
}
