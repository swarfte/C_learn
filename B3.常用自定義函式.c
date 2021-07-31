#include <stdio.h>

double Resendf (void);
int Resend (void);

int main () {
    printf ("Resendf()--回傳_小數\n");
    printf ("Resend()--回傳_整數\n");
    system ("pause");
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
