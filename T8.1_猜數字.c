#include <stdio.h>

int main () {
    int ans, no1;
    ans = 87;
    printf ("來猜數字阿87 \n請輸入:");
    scanf ("%d",&no1);
    if (no1 > ans) {
        printf ("這都能猜大真廢");
    }
    if (no1 < ans) {
        printf ("這都能猜少真廢");
    }
    if (no1 == ans) {
        printf ("題目就有答案都不用腦030");
    }
    return 0;
}
