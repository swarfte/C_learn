#include <stdio.h>
int main () {
int no1, no2;
    printf ("第一個數字:");
    //x=5
    scanf ("%d", &no1);
    printf ("第二個數字:");
    //y=3
    scanf ("%d", &no2);
    int temp = no1;
    //z=5
    //temp為備份
    no1 = no2;
    //y=3則x=3
    no2 = temp;
    //z=5則y=5
    printf ("no1: %d\n", no1);
    printf ("no2: %d\n", no2);
    return 0;
}
