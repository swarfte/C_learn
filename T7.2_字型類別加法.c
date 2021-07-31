#include <stdio.h>

int main () {
    char no1, sum;
    int no2;
    no1 = 'A';
    //0=48
    //A=65
    //a=97
    printf ("輸入數字");
    scanf ("%d",&no2);
    sum = no1 + no2;
    printf ("答案為%C\n",sum);
    return 0;
}
