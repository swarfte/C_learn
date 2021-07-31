#include <stdio.h>
int main () {
    int a, b, c;
    printf ("輸入第一個數字");
    scanf ("%d",&a);
    printf ("輸入第二個數字");
    scanf ("%d", &b);
    printf ("輸入第三個數字");
    scanf ("%d", &c);
    int tempa, tempb, tempc;
    tempa = a;
    tempb = b;
    tempc = c;
    a = b;
    b = c;
    c = tempa;
    printf ("%d\n", a);
    printf ("%d\n", b);
    printf ("%d\n", c);
    return 0;
}
