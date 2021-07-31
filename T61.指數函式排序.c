#include <stdio.h>
void swap (int *a ,int *b);

int main () {
    printf ("輸入兩個數字\n");
    int number [2];
    for (int run = 0 ; run < 2 ; run++) {
        scanf ("%d",&number[run]);
    }
    swap (&number[0] , &number[1]);
    printf ("%d %d",number [0],number[1]);
    return 0;
}

void swap (int *a , int *b){
    int temp = *a;
    if ( *a >=  *b) {
        *a  = * b;
        *b = temp;
    }
}
