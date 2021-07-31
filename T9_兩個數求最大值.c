#include <stdio.h>

int main () {
    printf ("請輸入第一個數字\n");
    int no1, no2;
    scanf ("%d", &no1);
    printf ("這輸入第二個數字\n");
    scanf ("%d", &no2);
    if (no1 > no2) {
        printf ("最大值為%d", no1);
    }
    if (no1 < no2) {
        printf ("最大值為%d", no2);
    }
    return 0;
}
