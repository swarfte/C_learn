#include <stdio.h>

int main () {
    int number;
    printf ("輸入有多少個數字\n");
    scanf ("%d",&number);
    int V [number] ;
    int Mnumber = number;
    for (int Vscan = 1 ; Vscan <= number ; Vscan ++) {
        printf ("輸入數字,還有%d次\n",Mnumber);
        scanf ("%d",&V [Vscan]);
        Mnumber--;
    }
    printf ("輸入的數字如下\n");
    for (int Vprint = 1 ; Vprint <= number ; Vprint ++) {
        printf ("%d\n",V [Vprint]);
    }
    return 0;
}
