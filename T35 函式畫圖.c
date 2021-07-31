#include <stdio.h>
void printX (int);
void START (int);

int main () {
    int X;
    printf ("X = ?\n");
    scanf ("%d",&X);
    START (X);
    return 0;
}
void START (int X) {
    int go;
    for (go = 1 ; go <= X ; go++) {
        printX(X);
        printf ("\n");
    }
}
void printX (int X) {
    for (int Y = 1; Y <= X; Y++){
            printf ("*");
    }
}
