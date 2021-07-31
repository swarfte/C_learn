#include <stdio.h>

int main () {
    printf ("輸入數字和運算符號\n");
    double X,Y;
    char Z;
    scanf ("%lf%c%lf",&X,&Z,&Y);
    if (Z == '+') {
            X = X + Y;
        printf ("答案為%lf\n",X);
    } else {
        if (Z == '-') {
            X = X - Y;
            printf ("答案為%lf\n",X);
        } else {
            if (Z == '*') {
                X = X * Y;
                printf ("答案為%lf\n",X);
            } else {
                X = X / Y;
                printf ("答案為%lf\n",X);
                }
        }
    }
    return 0;
}
