#include <stdio.h>
void increasedone (int *number) {
    *number = *number + 1;
}

int main () {
    printf ("輸入數字\n");
    int number;
    scanf ("%d",&number);
    increasedone (&number);
    printf ("%d\n",number);
    return 0;
}
