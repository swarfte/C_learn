#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int iN (void);
char cN (void);
double dN (void);

int main () {
    char strA[4][5] ={ "What" ,"is", "you", "do" };
    char *strB [4] = { strA[0] , strA[1] , strA[2] , strA[3] };
    strB[1] [0] = 'd';
    strB[1] [1] = 'o';
    char strC[6] = "doing";
    strB[3] = strC;
    printf ("%s %s %s %s \n",*(strB + 0), *(strB + 1) , *(strB +2) , *(strB +3) );
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

