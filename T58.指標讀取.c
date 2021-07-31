#include <stdio.h>

int main () {
    printf ("輸入數字\n");
    int number;
    scanf ("%d",&number);
    int *numberlog = &number;
    printf ("記憶體位置:%d\n",numberlog);
    int check = *numberlog;
    printf ("大小:%d\n",check);
    return 0;
}
