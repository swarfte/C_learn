#include <stdio.h>

int main () {
    int number ;
    if (scanf ("%d",&number) == 1) {
        printf ("%d\n",number);
    } else {
        printf ("出現錯誤\n");
    }
    return 0;
}
