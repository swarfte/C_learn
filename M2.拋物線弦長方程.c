#include <stdio.h>
#include <math.h>

double Resendf (void);
int Resend (void);

int main () {
    double K,XY,P,F,L;
    printf ("1.X^2  2.Y^2\n");
    int choose = Resend();
    switch (choose) {
    case 1 :
    printf ("系數 :1.正數 2. 負數\n");
    choose = Resend();
    switch (choose) {
    case 1 :
    printf ("輸入Y的系數\n");
    XY = Resendf();
    P = XY / 2;
    printf ("得出P = %lf\n",P);
    F = P / 2;
    printf ("得出焦點為(%lf,0)\n",F);
    L = (P / 2) * -1 ;
    printf ("得出準線在X = %lf\n",L);
    break;
    case 2 :

    break;
    }
    break;
    case 2 :

    break;
    }
    return 0;
}

double Resendf (void) {
    double number;
    scanf ("%lf",&number);
    return number;
}

int Resend (void) {
    int number;
    scanf ("%d",&number);
    return number;
}
