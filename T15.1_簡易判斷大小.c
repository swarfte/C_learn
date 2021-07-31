#include <stdio.h>

int main () {
    printf ("輸入兩個數字\n");
    int a,b;
    scanf ("%d%d",&a,&b);
    if (a > b) {
        printf ("a > b\n");
    } else {
        if (a < b) {
            printf ("a < b\n");
        } else {
            printf ("a = b\n");
        }
    }
    return 0;
}
