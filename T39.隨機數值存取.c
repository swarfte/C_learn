#include <stdio.h>

int main () {
    printf ("1.90 2.75 3.83 4.89 5.71\n");
    printf ("輸入數字\n");
    int max = 0;
    int num;
    int choose [5] = {90,75,83,89,71};
    do {
        scanf ("%d",&num);
        max += choose [num -1];
    }   while (num != 0);
    printf ("總數和為%d\n",max);
    return 0;
}
