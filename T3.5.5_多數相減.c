#include <stdio.h>
int main () {
    float no, sum;
    printf ("被減數:");
    scanf ("%f",&no);
    sum = no;
    printf ("第一個減數");
    scanf ("%f",&no);
    sum = sum - no;
    printf ("第二個減數");
    scanf ("%f",&no);
    sum = sum - no;
    printf ("答案為%f",sum);
    return 0;
}
