#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int iN (void);
char cN (void);
double dN (void);

int main () {
    int len = 0;
    char number[10][10];
    char imput [10];
    while (1){
        scanf ("%s",imput);
        if (strcmp(imput , "END") == 0){
        break;
        }
        strcpy (number [len] , imput);
        len++;
    }
    printf ("---------------------------------\n");
    for (int run = 0 ;run <len ; run++){
        printf ("%s ",number[run]);
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
