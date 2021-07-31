
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int intN (void);
char charN (void);
double doubleN (void);

int main () {
    int number = -2;
    printf ("%d",number % 2);
    return 0;
}

int intN (void){
    int choose;
    scanf ("%d",&choose);
    return choose;
}

char charN (void){
    char choose;
    scanf ("%c",&choose);
    return choose;
}

double doubleN (void){
    double choose;
    scanf ("%lf",&choose);
    return choose;
}
