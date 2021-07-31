
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int iN (void);
char cN (void);
double dN (void);

int main () {
    int use [10];
    int (*number) [10] = &use;
    for (int run = 0 ; run < 10 ; run++){
        (*number)[run] = run;
    }
    for (int run = 0 ; run < 10 ; run++){
        printf ("%d ",(*number)[run]);
    }
    return 0;
}

int iN (void){
    int choose;
    scanf ("%d",&choose);
    return choose;
}

char cN (void){
    char choose;
    scanf ("%c",&choose);
    return choose;
}

double dN (void){
    double choose;
    scanf ("%d",&choose);
    return choose;
}
