#include <stdio.h>

int main () {
    char no1, X, sum;
    X = 'a' - 'A';
    //大寫和小寫之間差32個數字
    printf ("輸入大寫字母");
    scanf ("%c",&no1);
    sum = X + no1;
    printf ("小寫為%c",sum);
    return 0;
}
