#include <stdio.h>

int main () {
    printf ("輸入你的成績\n");
    int MIC;
    scanf ("%d",&MIC);
    if (MIC >= 60) {
        printf ("你合格了\n");
    } else {
        printf ("你不合格\n");
    }
    return 0;
}
