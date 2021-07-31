#include <stdio.h>

int main () {
    printf ("輸入需要查找的ID'\n");
    int X;
    scanf ("%d",&X);
    switch (X) {
        case 1 :
            printf ("1號為A\n");
        break;
        case 2 :
            printf ("2號為B\n");
        break;
        case 3 :
            printf ("3號為C\n");
        break;
        default :
            printf ("此ID不存在\n");
        break;
    }
    return 0;
}
